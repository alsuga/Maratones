#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int a= 0,c = 0,g = 0,t = 0;
  string in;
  cin>>in;
  for(int i = 0; i < in.size(); i++){
    if(in[i]=='A') a++;
    if(in[i]=='C') c++;
    if(in[i]=='G') g++;
    if(in[i]=='T') t++;
  }
  cout<<a<<" "<<c<<" "<<g<<" "<<t<<endl;
  return 0;
}
