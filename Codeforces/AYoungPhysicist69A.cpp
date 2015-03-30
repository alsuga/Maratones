#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int in,a=0,b=0,c=0,tmp;
  cin>>in;
  while(in--){
    cin>>tmp;
    a += tmp;
    cin>>tmp;
    b+=tmp;
    cin>>tmp;
    c+= tmp;
  }
  if(a+b+c) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
  return 0;
}