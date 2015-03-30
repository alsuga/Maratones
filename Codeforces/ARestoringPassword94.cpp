#include <bits/stdc++.h>

#define __   ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){ __
  string in,tmp;
  cin>>in;
  map<string,int> mapa;
  for(int i = 0; i < 10; i++){
    cin>>tmp;
    mapa[tmp] = i;
  }
  for(int i = 0; i < 80; i+=10) cout<<mapa[in.substr(i,10)];
  cout<<endl;
  return 0;
}