#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  int n,m;
  cin>>n>>m;
  char vec[60][60];
  memset(vec,'.',sizeof vec);
  for(int i = 0; i < n; i+= 2){
    for(int j = 0; j < m; j++){
      vec[i][j] = '#';
    }
  }
  bool flag = true;
  for(int i = 1; i < n; i+=2, flag = !flag){
    if(flag) vec[i][m-1] = '#';
    else vec[i][0]='#';
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cout<<vec[i][j];
    }
    cout<<endl;
  }
  return 0;
}
