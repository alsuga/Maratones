#include <bits/stdc++.h>

#define __   ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int bits(int in,int mx){
  int cont = 0;
  for(int i = 0; i < mx; i++ ){
    if(in & 1<<i) cont++;
  }
  return cont;
}

int main(){ __
  int n,m,k,me; cin>>n>>m>>k;
  int vec[1002];
  for(int i = 0; i < m; i++) cin>>vec[i];
  cin>>me;
  int cont = 0;
  for(int i = 0; i < m; i++){
    if(bits(me^vec[i],n) <= k) cont++;
  }
  cout<<cont<<endl;
  return 0;
}