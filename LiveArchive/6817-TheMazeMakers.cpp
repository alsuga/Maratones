#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

char mat[51][51];
bool visited[51][51];


int value(char in){
  int val = 0;
  if(in >= '0' and in <= '9') val = in-'0';
  if(in >= 'A' and in <= 'F') val = in-'A'+10;
  return in;
}

int main(){__
  int X,Y;
  while(cin>>X>>Y and X+Y > 0){
    pair<int,int> door[2];
    door[1].first = -1;
    memset(visited,false,sizeof visited);
    for(int i = 0; i < X; i++) {
      for(int j = 0; j < Y; j++){
        cin>>mat[i][j];
        if(i == 0 and !(value(mat[i][j]) & 8) ) door[(door[0].first < 0 ? 0 : 1)] = make_pair(i,j);
        if(j == 0 and !(value(mat[i][j]) & 1) ) door[(door[0].first < 0 ? 0 : 1)] = make_pair(i,j);
        if(i+1 == X and !(value(mat[i][j]) & 2) ) door[(door[0].first < 0 ? 0 : 1)] = make_pair(i,j);
        if(j+1 == Y and !(value(mat[i][j]) & 4) ) door[(door[0].first < 0 ? 0 : 1)] = make_pair(i,j);
      }
    }
    pair<int,int> act;
    bool path = false;
    queue<pair<int,int> > cola;
    cola.push(door[0]);
    visited[door[0].first][door[0].second] = true;
    while(!cola.empty()){
      int i,j;
      i = cola.front().first;
      j = cola.front().second;
      cola.pop();
      if(visited[i][j]) path = true;
      if(i > 0) if(!(value(mat[i-1][j]) & 1) and !visited[i-1][j]) {cola.push(make_pair(i-1,j)); visited[i-1][j] = true;}
      if(j > 0) if(!(value(mat[i][j-1]) & 8) and !visited[i][j-1]) {cola.push(make_pair(i,j-1)); visited[i][j-1] = true;}
      if(i <= X) if(!(value(mat[i+1][j]) & 4) and !visited[i+1][j]) {cola.push(make_pair(i+1,j)); visited[i+1][j] = true;}
      if(j <= Y) if(!(value(mat[i][j+1]) & 2) and !visited[i][j+1]) {cola.push(make_pair(i,j+1)); visited[i][j+1] = true;}
    }
    if(!visited[door[1].first][door[1].second]){
      cout<<"NO SOLUTION"<<endl;
      continue;
    }
    bool flag = true;
    for(int i = 0; i < X and flag; i++){
      for(int j = 0; j < Y and flag; j++){
        flag = visited[i][j];
      }
    }
    if(!flag){
      cout<<"UNREACHABLE CELL"<<endl;
      continue;
    }
    if(!path){
      cout<<"MULTIPLE PATHS"<<endl;
      continue;
    }
    cout<<"MAZE OK"<<endl;
  }
  return 0;
}
