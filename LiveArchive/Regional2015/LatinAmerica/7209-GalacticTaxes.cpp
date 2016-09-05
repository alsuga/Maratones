#include <bits/stdc++.h>

#define tol 1e-10
using namespace std;

struct node {
  int to, a, b;

  double w;

  node(){}

  node(int _t, int _a, int _b): to(_t), a(_a), b(_b) {}

  double calc(double t) {
    return a * t + b;
  }
};

struct pa {
  int to;
  double w;

  pa(int _t, double _w): to(_t), w(_w) {}

  bool operator < (const pa &n) const {
    return w > n.w;
  }
};

struct graph {
  vector<vector<node> > arist;
  graph() {}
  graph(int N) {
    arist = vector<vector<node> >(N);
  }

  void insert(int from, int to, int a, int b) {
    arist[from].push_back(node(to, a, b));
    arist[to].push_back(node(from, a, b));
  }

  double dijkstra(double t) {
    vector<double> d(arist.size(), HUGE_VAL);
    priority_queue<pa > q;
    d[0] = 0.0;
    q.push(pa(0, 0.0));
    int n = arist.size() - 1;
    while(!q.empty()) {
      int nd = q.top().to;
      double dist = q.top().w;
      q.pop();
      if(dist > d[nd])
        continue;
      if(nd == n)
        return dist;
      for(int i = 0; i < arist[nd].size(); ++i) {
        int to = arist[nd][i].to;
        double w = arist[nd][i].calc(t);
        if(dist + w < d[to]) {
          d[to] = dist + w;
          q.push(pa(to, d[to]));
        }
      }
    }
    return HUGE_VAL;
  }
};

double ternary(double a, double b, graph &g) {
  double sa, sb, sp1, sp2, s1, s2;
  while(true) {
    sa = g.dijkstra(a);
    sb = g.dijkstra(b);
    if(fabs(sa - sb) < tol and fabs(a - b) < tol)
      return (sa + sb) / 2.0;
    s1 = a + (b - a) / 3.0;
    s2 = b - (b - a) / 3.0;
    sp1 = g.dijkstra(s1);
    sp2 = g.dijkstra(s2);
    if(sp1 < sp2) {
      a = s1;
      continue;
    }
    if(sp1 > sp2) {
      b = s2;
      continue;
    }
    a = s1;
    b = s2;
  }
}

int main() {
  int N, M;
  double mi, ma, out;
  int f, t, a , b;
  cin.sync_with_stdio(false);
  cin.tie(NULL);
  while(cin >> N >> M) {
    mi = 0;
    ma = 24.0 * 60.0;
    graph g(N);
    for(int i = 0; i < M; i++) {
      cin >> f >> t >> a >> b;
      f--, t--;
      g.insert(f, t, a, b);
    }
    out = ternary(mi, ma, g);
    printf("%.5lf\n", out);
  }
  return 0;
}
