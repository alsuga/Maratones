#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  int n,x,y; cin>>n>>x>>y;
  vector<int> vec(n);
  int sec,tmp;
  for(int i = 0; i < n; i++){
    cin>>tmp;
    sec = tmp/(x+y);
    if(tmp == sec*(x+y)){
      cout<<"Both"<<endl;
      continue;
    }
    tmp -= sec*(x+y);
    cout<<tmp<<endl;
  }
  return 0;
}
