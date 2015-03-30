#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  int n,m,k,x,y;
  int vec[1002][1002];
  cin>>n>>m>>k;
  memset(vec,0,sizeof vec);
  for(int i = 1; i <= k; i++){
    cin>>x>>y;
    if(vec[x-1][y-1] == 0) vec[x-1][y-1] = i;
  }
  int men = 10000000;
  for(int i = 0; i < n-1; i++){
    for(int j = 0; j < m-1; j++){
      if(vec[i][j] == 0) continue;
      bool flag = true;
      int actmen = 0;
      for(int l = 0; l < 2 and flag; l++){
        for(int r = 0; r < 2 and flag; r++){
          if(vec[i+l][j+r] == 0) {
            flag = false;
            actmen = 0;
          }else if(actmen < vec[i+l][j+r]) actmen = vec[i+l][j+r];
        }
      }
      if(flag)men = (men > actmen)? actmen : men;
    }
  }
  if(men == 10000000) men = 0;
  cout<<men<<endl;
  return 0;
}
