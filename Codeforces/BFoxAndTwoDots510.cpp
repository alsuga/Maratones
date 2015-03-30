#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
int nm,mm;
char vec[52][52];
bool visited[52][52];

bool bfs(int n, int m){
  int x,y,dir;
  stack<pair<int,pair<int,int> > >q;
  q.push(make_pair(n,make_pair(m,0)));
  while(!q.empty()){
    x = q.top().first;
    y = q.top().second.first;
    dir = q.top().second.second;
    if(visited[x][y]) return true;
    else visited[x][y]=true;
    q.pop();
    if(x > 0) if(vec[x-1][y] == vec[x][y] and dir != 2){
      q.push(make_pair(x-1, make_pair(y,1)));
    }
    if(x+1 < nm) if(vec[x+1][y] == vec[x][y] and dir != 1){
      q.push(make_pair(x+1, make_pair(y,2)));
    }
    if(y > 0) if(vec[x][y-1] == vec[x][y] and dir != 4){
      q.push(make_pair(x, make_pair(y-1,3)));
    }
    if(y+1 < mm) if(vec[x][y+1] == vec[x][y] and dir != 3){
      q.push(make_pair(x, make_pair(y+1,4)));
    }
  }
  return false;
}

int main(){__
  cin>>nm>>mm;
  memset(visited,false,sizeof visited);
  for (int i = 0; i < nm; i++) {
    for (int j = 0; j < mm; j++) {
      cin>>vec[i][j];
    }
  }
  for (int i = 0; i < nm; i++) {
    for (int j = 0; j < mm; j++) {
      if(visited[i][j]) continue;
      if(bfs(i,j)){
        cout<<"Yes"<<endl;
        return 0;
      }
    }
  }
  cout<<"No"<<endl;
  return 0;
}
