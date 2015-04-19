#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){__
  int n,m; cin>>n>>m;
  vector<bool> boys(n,false),girls(m,false);
  int b,g,tmp;
  cin>>b;
  int h = b;
  while(b--){
    cin>>tmp;
    boys[tmp] = true;
  }
  cin>>g;
  h += g;
  while(g--){
    cin>>tmp;
    girls[tmp] = true;
  }
  map< pair<int,int>, bool> mapa;
  for(int i = 0; h < n+m and h != 0; i++){
    if(mapa[make_pair(i%n,i%m)])
      break;
    if(boys[i%n] ^ girls[i%m]){
      h++;
      boys[i%n] = true;
      girls[i%m] = true;
      mapa[make_pair(i%n,i%m)] = true;
    }
  }
  if(h == m+n) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
