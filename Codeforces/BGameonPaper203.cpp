#include <bits/stdc++.h>

using namespace std;

int mat[1002][1002];

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n,m,x,y,tmp,men=1000003;
  cin>>n>>m;
  memset(mat,0,sizeof(mat));
  for(int i = 1; i <= m; i++){
    cin>>x>>y;
    mat[x-1][y-1] = i;
  }
  for(int i = 0; i < n-2; i++){
    for(int j = 0; j < n-2; j++){
      bool flag = true;
      tmp = 0;
      for(int k = i; k < i+3 and flag; k++){
        for(int p = j; p < j+3; p++){
          if(mat[k][p] == 0) {
            flag = false;
            break;
          }
          tmp = max(tmp,mat[k][p]);
        }
      }

      if(flag) men = min(tmp,men);
    }
  }
  if(men == 1000003) men = -1;
  cout<<men<<endl;
  return 0;
}