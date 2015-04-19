#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  int s,t; cin>>s>>t;
  vector<int> vec(t);
  for(int i = 0; i < t; i++)
    cin>>vec[i];
  int l = 0,r= t-1,m;
  while(l<r){
    m = (r+l)/2;
    if(vec[m] == s) {
      cout<<m<<endl;
      break;
    }
    if(vec[r] == s){
      cout<<r<<endl;
      break;
    }
    if(vec[l] == s){
      cout<<s<<endl;
      break;
    }
    if(s < vec[m]) r = m;
    else l = m;
  }
  return 0;
}
