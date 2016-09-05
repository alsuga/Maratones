#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'

vector<vector<int> > graph;
vector<bool> visited;

int dfs(int node){
  if(visited[node]) return 0;
  stack<int> st;
  st.push(node);
  while(!st.empty()){
    int nn = st.top();
    st.pop();
    visited[nn] = true;
    for(int i = 0; i < graph[nn].size(); i++){
      if(!visited[graph[nn][i]])
        st.push(graph[nn][i]);
    }
  }
  return 1;
}

int main(){
  int T; cin>>T;
  while(T--){
    int n,m,x,y; cin>>n>>m;
    graph.clear();
    visited.clear();
    graph.resize(n);
    visited.resize(n,false);
    while(m--){
      cin>>x>>y;
      graph[x-1].push_back(y-1);
      graph[y-1].push_back(x-1);
    }
    int cont = 0;
    for(int i = 0; i < n; i++){
      cont += dfs(i);
    }
    long long out = (cont * (cont - 1)) / 2;
    cout<<out<<endl;
  }
  return 0;
}

