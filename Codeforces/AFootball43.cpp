#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int in;
  string tmp;
  map<string, int> mapa;
  cin>>in;
  while(in--){
    cin>>tmp;
    mapa[tmp]++;
  }
  int max = 0;
  for(map<string, int>::iterator it = mapa.begin(); it != mapa.end(); ++it){
    if(it->second > max){
      max = it->second;
      tmp = it->first;
    }
  }
  cout<<tmp<<endl;
  return 0;
}