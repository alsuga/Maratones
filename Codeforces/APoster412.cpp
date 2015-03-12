#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int a,b; cin>>a>>b;
  string in;
  cin>>in;
  if(a - b < b) {
    for(int i = 0; i < a-b; i++) cout<<"RIGHT"<<endl;
    for(int i = 0; i < a; i++){
      cout<<"PRINT "<<in[in.size()-1-i]<<endl;
      if(i+1 < a) cout<<"LEFT"<<endl;
    }
  }
  else {
    for(int i = 0; i < b-1; i++) cout<<"LEFT"<<endl;
    for(int i = 0; i < a; i++){
      cout<<"PRINT "<<in[i]<<endl;
      if(i+1 < a) cout<<"RIGHT"<<endl;
    }
  }
  return 0;
}