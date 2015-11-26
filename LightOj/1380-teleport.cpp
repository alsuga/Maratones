#include <bits/stdc++.h>

using namespace std;

struct edge {
  int to, weight;
  edge() {}
  edge(int t, int w): to(t), weight(w) {}
  bool operator < (const edge &that) {
    return weight < that.weight;
  }
};

int prim(graph &grafo, set<int> &visit, int init) {
  int total = 0;
  priority_queue<edge> q;
  q.push(edge(init, 0));
  while(!q.empty()) {
    int node = q.top().to;
  }
}

int main() {
  int test; cin >> test;
  int n, m , k, u, v, w;
  for(int c = 1; c <= test; c++) {
    cin >> n >> m >> k;
    graph grafo(n);
    while(m--) {
      cin >> u >> v >> w;
      grafo(u).push_back(edge(v, w));
      grafo(v).push_back(edge(u, w));
    }
    set<int> visit;
    int out = prim(grafo, visit);
    cout << "Case " << c << ": ";
    if(visit.size() == grafo.size())
      cout << out << endl;
    else
      cout << "impossible\n";
  }
  return 0;
}
