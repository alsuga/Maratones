#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int maxp=0,maxc=0,p,c,test,mp=0, minp=100001,minc = 100001;
  cin>>test;
  while(test--){
    cin>>p>>c;
    if(c > maxc){
      maxp = p;
      maxc = c;
    }
    if(mp < p or maxp == 0) mp = p;
  }
  if(maxp < mp) puts("Happy Alex");
  else puts("Poor Alex");
  return 0;
}
