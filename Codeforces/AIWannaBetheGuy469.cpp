#include <bits/stdc++.h>

#define __   ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){ __
  int n,m,tmp;
  cin>>n;
  bool level[n]; memset(level,false,sizeof(level));
  cin>>m;
  for(int i = 0; i < m; i++) {
    cin>>tmp; level[tmp-1] = true;
  }
  cin>>m;
  for(int i = 0; i < m; i++) {
    cin>>tmp; level[tmp-1] = true;
  }
  bool flag = true;
  for(int i = 0; i < n; i++) {
    flag &= level[i];
  }
  if(flag) cout<<"I become the guy."<<endl;
  else cout<<"Oh, my keyboard!"<<endl;

  return 0;
}