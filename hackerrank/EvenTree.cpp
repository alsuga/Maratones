#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

vector<bool> visited(101, false);
int as =0;

int dfs(vector<vector<int> > &graph, vector<int> &sons, int pos){
  int out = 1;
  visited[pos] = true;
  for(int i = 0; i < graph[pos].size(); i++){
    if(visited[graph[pos][i]]) continue;
    out += dfs(graph, sons, graph[pos][i]);
  }
  sons[pos] = out;
  if(out % 2 == 0) ++as;
  return out;
}

int main(){__
  int n,m,x,y;
  cin>>n>>m;
  vector<vector<int> > graph(n);
  vector<int> vec(n,0);
  vector<int> sons(n,0);
  while(m--){
    cin>>x>>y;
    vec[x-1]++;
    graph[y-1].push_back(x-1);
  }
  for(int i = 0; i < n; i++){
    if(vec[i] == 0) {
      dfs(graph, sons,i);
      cout<<as - 1<<endl;
      break;
    }
  }
  return 0;
}
