#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int a,b,c = 0;
  cin>>a>>b;
  while(b>0){
    c*=10;
    c+= b%10;
    b/=10;
  }
  cout<<c+a<<endl;
  return 0;
}