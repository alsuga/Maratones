#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  string a,b,c;
  int size = 0;
  cin>>a>>b>>c;
  map<char, int> mapa,mapa2;
  size = a.size() + b.size();
  if(size != c.size()) {
    cout<<"NO"<<endl;
    return 0;
  }

  for(int i = 0; i < a.size(); i++) mapa[a[i]]++;
  for(int i = 0; i < b.size(); i++) mapa[b[i]]++;
  for(int i = 0; i < c.size(); i++) mapa2[c[i]]++;
  for(map<char, int>::iterator it = mapa2.begin(); it != mapa2.end(); ++it){
    if(mapa[it->first] != it->second){
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
  return 0;
}