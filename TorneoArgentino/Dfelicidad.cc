#include <bits/stdc++.h>

using namespace std;

bool visit[1001];
typedef map<int, set<int> > gf;

gf grafo;

int dfs(int i, int R, int E) {
  visit[i] = true;
  stack<int> st;
  st.push(i);
  int tmp;
  int nodos = 0, aristas = 0;
  while(!st.empty()) {
    nodos++;
    tmp = st.top(); st.pop();
    aristas += grafo[tmp].size();
    for(set<int>::iterator it = grafo[tmp].begin(); it != grafo[tmp].end(); ++it) {
      if(!visit[*it]) {
        st.push(*it);
        visit[*it] = true;
      }
    }
  }
  aristas >>= 1;
  tmp = ((nodos - 1) * nodos ) / 2;
  tmp -= aristas;
  return min(tmp * R, nodos * E);
}

int main() {
  int N, M, R, E;
  cin >> N >> M >> R >> E;
  for(int i = 0; i < N; i++)
    visit[i] = false;
  int x,y;
  for(int i = 0; i < M; i++) {
    cin >> x >> y;
    x--;
    y--;
    grafo[x].insert(y);
    grafo[y].insert(x);
  }
  int acum = 0;
  for(int i = 0; i < N; i++) {
    if(!visit[i])
      acum += dfs(i, R, E);
  }
  cout << acum << endl;
  return 0;
}
