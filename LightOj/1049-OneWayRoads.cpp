#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

typedef pair <int, int> pii;
typedef vector < pii > vpii;
typedef vector< vpii > gh;

bool flag;

int dfs(gh &graph, int act, int parent, int fg) {
  int sum = 0;
  if(act == 0 and !flag)
    return 0;
  if(flag)
    flag = false;
  for(int i = 0; i < graph[act].size(); i++) {
    if(graph[act][i].first != parent) {
      if(graph[act][i].second * fg < 0)
        sum += abs(graph[act][i].second);
      return sum + dfs(graph, graph[act][i].first, act, fg);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int test; cin >> test;
  for(int cas = 1; cas <= test; cas++) {
    int nodos; cin >> nodos;
    gh graph(nodos);
    int from, to, cost;
    flag = true;
    for(int i = 0; i < nodos; i++) {
      cin >> from >> to >> cost;
      from--;
      to--;
      graph[from].push_back(make_pair(to, cost));
      graph[to].push_back(make_pair(from, cost * -1));
    }
    int out = dfs(graph, 0, graph[0][0].first, 1);
    flag = true;
    out = min(out, dfs(graph, 0, graph[0][0].first, -1));
    cout << "Case " << cas << ": " << out << endl;
  }
  return 0;
}
