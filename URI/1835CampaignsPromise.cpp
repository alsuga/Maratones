#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<bool> vb;
typedef map<int, vi> mivi;

void dfs(mivi &grafo, vb &visit, int act) {
  stack<int> st;
  st.push(act);
  int tmp;
  visit[act - 1] = true;
  while(!st.empty()) {
    act = st.top();
    st.pop();
    for(int i = 0; i < grafo[act].size(); i++) {
      tmp = grafo[act][i];
      if(visit[tmp - 1])
        continue;
      else {
        visit[tmp - 1] = true;
        st.push(tmp);
      }
    }
  }
}

int solve(int N, int M) {
  mivi grafo;
  vb visit(N);
  int from, to, out = 0;
  while(M--) {
    cin >> from >> to;
    grafo[from].push_back(to);
    grafo[to].push_back(from);
  }
  for(int i = 1; i <= N; i++) {
    if(visit[i - 1])
      continue;
    else {
      dfs(grafo, visit, i);
      out++;
    }
  }
  return out - 1;
}

int main() {
  int test, out, N, M; cin >> test;
  for(int i = 1; i <= test; i++) {
    cin >> N >> M;
    out = solve(N, M);
    cout << "Caso #" << i << ": ";
    if(out == 0)
      cout << "a promessa foi cumprida" << endl;
    else
      cout << "ainda falta(m) " << out << " estrada(s)" << endl;
  }
  return 0;
}
