#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  string a = "qwertyuiopasdfghjkl;zxcvbnm,./";
  map<char,int> mapa;
  for(int i = 0; i < a.size(); i++){
    mapa[a[i]] = i;
  }
  string dir,in,out;
  cin>>dir>>in;
  int st = 1;
  if(dir == "R") st=-1;
  for(int i = 0; i < in.size(); i++){
    out += a[mapa[in[i]] + st];
  }
  cout<<out<<endl;
  return 0;
}
