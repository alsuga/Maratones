#include <bits/stdc++.h>

#define __   ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){ __
  int n,my=-1,mx = 1000000009,tmpx,tmpy;cin>>n;
  map<pair<int,int>,int> mapa;
  for(int i = 0; i < n; i++){
    cin>>tmpx>>tmpy;
    if(tmpx < mx) mx = tmpx;
    if(tmpy > my) my = tmpy;
    mapa[make_pair(tmpx,tmpy)] = i+2;
  }
  cout<<mapa[make_pair(mx,my)]-1<<endl;
  return 0;
}