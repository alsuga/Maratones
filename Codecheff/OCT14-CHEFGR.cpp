#include<bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int test,n,m; cin>>test;
  int vec[1001],masimo;
  while(test--){
    masimo = 0;
    cin>>n>>m;
    for(int i = 0; i < n; i++){
      cin>>vec[i];
      masimo = max(masimo,vec[i]);
    }
    for(int i = 0; i < n and m >= 0; i++) m-= masimo- vec[i];
    if(m%n == 0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
  return 0;
}
