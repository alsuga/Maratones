#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){
  int test,farmers,acum;
  long long out,in1,in2;
  cin>>test;
  while(test--){
    cin>>farmers;
    out = 0;
    while(farmers--){
      cin>>in1>>in2>>in2;
      out += in1*in2;
    }
    cout<<out<<endl;
  }
  return 0;
}
