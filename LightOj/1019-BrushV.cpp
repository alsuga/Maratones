#include <bits/stdc++.h>

using namespace std;


struct edge {
  int to, weight;
  edge() {}
  edge(int t, int w) : to(t), weight(w) {}
  bool operator < (const edge &that) const {
    return weight > that.weight;
  }
};

typedef vector< vector<edge> > graph;

int dijkstra(graph &grafo, int s, int n) {
  int d[grafo.size()];
  for(int i = 0; i < grafo.size(); ++i)
    d[i] = INT_MAX;
  priority_queue<edge> q;
  d[s] = 0;
  q.push(edge(s, 0));
  while(!q.empty()) {
    int node = q.top().to;
    int dist = q.top().weight;
    q.pop();
    if(dist > d[node])
      continue;
    if(node == n)
      return dist;
    for(int i = 0; i < grafo[node].size(); ++i) {
      int to = grafo[node][i].to;
      int w = grafo[node][i].weight;
      if(dist + w < d[to]) {
        d[to] = dist + w;
        q.push(edge(to, d[to]));
      }
    }
  }
  return INT_MAX;
}

int main() {
  int test; cin >> test;
  for(int caso = 0; caso < test; ++caso) {
    int nodos, aristas, from, to, weight;
    cin >> nodos >> aristas;
    graph grafo(nodos);
    for(int i = 0; i < aristas; ++i) {
      cin >> from >> to >> weight;
      from--;
      to--;
      grafo[from].push_back(edge(to, weight) );
      grafo[to].push_back(edge(from, weight) );
    }
    int out = dijkstra(grafo, 0, nodos - 1);
    cout << "Case " << caso + 1 << ": ";
    if(out == INT_MAX)
      cout << "Impossible" << endl;
    else
      cout << out << endl;
    grafo.clear();
  }
  return 0;
}
