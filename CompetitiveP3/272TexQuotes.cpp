#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  string in,out;
  bool flag = true;
  while(getline(cin,in)){
    for(int i=0; i < in.size(); i++){
      if(in[i] == '\"'){
        if(flag) out+="``";
        else out+="\'\'";
        flag = !flag;
      }
      else out+=in[i];
    }
    out+='\n';
  }
  cout<<out;
  return 0;
}

