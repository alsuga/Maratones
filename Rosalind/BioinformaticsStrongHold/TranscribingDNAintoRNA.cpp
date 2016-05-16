#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  string in;
  cin>>in;
  for(int i = 0; i < in.size(); i++){
    if(in[i]=='T') cout<<'U';
    else cout<<in[i];
  }
  cout<<endl;
  return 0;
}
