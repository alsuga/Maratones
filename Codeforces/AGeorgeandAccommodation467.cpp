#include <bits/stdc++.h>

#define __   ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){ __
  int n; cin>>n;
  int tmp1,tmp2,out = 0;
  while(n--){
    cin>>tmp1>>tmp2;
    if(tmp2-tmp1 >= 2) out++;
  }
  cout<<out<<endl;
  return 0;
}