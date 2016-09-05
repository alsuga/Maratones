#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

typedef map<int, set<int> > gh;
typedef map<int, int> cl;

int* dfs(gh &graph, cl &visited, int start ) {
  static int canti[2];
  canti[0] = 0;
  canti[1] = 0;
  stack<int> st;
  int act = start;
  st.push(start);
  visited[act] = 1;
  canti[0] ++;
  while(!st.empty()) {
    act = st.top(); st.pop();
    for(set<int>::iterator it = graph[act].begin(); it != graph[act].end(); ++it) {
      if(visited[*it] == 0) {
        st.push(*it);
        canti[2 - visited[act]] ++;
      }
      visited[*it] = 3 - visited[act];
    }
  }
  return canti;
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int T, caso = 0; cin >> T;
  int cant[2] = {0, 0};
  while(T--) {
    int nodes; cin >> nodes;
    gh graph;
    cl color;
    cant[0] = 0;
    cant[1] = 0;
    int from, to;
    while(nodes--) {
      cin >> from >> to;
      graph[from].insert(to);
      graph[to].insert(from);
    }
    int *tmp;
    for(gh::iterator it = graph.begin(); it != graph.end(); ++it) {
      if(color[it->first] == 0) {
        tmp = dfs(graph, color, it->first);
        cant[0] += max(tmp[0], tmp[1]);
        cant[1] += min(tmp[0], tmp[1]);
      }
    }
    cout << "Case " << ++caso << ": " << cant[0] << endl;
  }
  return 0;
}
