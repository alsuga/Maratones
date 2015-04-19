#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

string mat[21];

int main(){__
  int x,y,px,py;
  char trash;
  for(int test = 0; cin>>y>>x and x+y > 0; test++){
    cout<<"HOUSE "<<test+1<<endl;
    for(int i = 0 ; i < x; i++){
        cin>>mat[i];
      for(int j = 0; j < mat[i].size(); j++){
        if(mat[i][j]== '*'){
          px = i;
          py = j;
        }
      }
    }
    pair<int,int> dir = make_pair(0,0);
    if(px == 0) dir.first = 1;
    if(py == 0) dir.second = 1;
    if(px == x-1) dir.first = -1;
    if(py == y-1) dir.second = -1;
    while(mat[px][py] != 'x'){
      if(mat[px][py] == '/'){
        dir.second *= -1;
        dir.first *= -1;
        swap(dir.first,dir.second);
      }
      if(mat[px][py] == '\\'){
        swap(dir.first,dir.second);
      }
      px += dir.first;
      py += dir.second;
    }
    mat[px][py] = '&';
    for(int i = 0 ; i < x; i++){
      for(int j = 0; j < y; j++){
        cout<<mat[i][j];
      }
      cout<<endl;
    }
  }
  return 0;
}
