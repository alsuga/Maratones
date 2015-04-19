#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  int test; cin>>test;
  string a;
  regex n ("(.*)(35)"),f ("9(.*)4"),u ("190(.*)");
  while (test--){
    cin>>a;
    int sz = a.size();
    if(a == "1" or a == "4" or a == "78"){
      cout<<"+"<<endl;
      continue;
    }
    if(regex_match(a,n)){
      cout<<"-"<<endl;
      continue;
    }
    if(regex_match(a,f)){
      cout<<"*"<<endl;
      continue;
    }
    if(regex_match(a,u)){
      cout<<"?"<<endl;
    }
  }
  return 0;
}
