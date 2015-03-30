#include <bits/stdc++.h>
using namespace std;
#define ___ ios_base::sync_with_stdio(0);cin.tie(NULL);
#define endl '\n'
const long long Mod =1000000007;

long long sum(long long a){
  if(a%2 == 0) return (((a/2) % Mod)*((a+1)%Mod)) %Mod;
  return ((((a+1)/2) % Mod)*(a%Mod)) %Mod;
}

int main(){___
  int a,b,di = 1;cin>>a>>b;
  long long out = 0,tmp,tmp1,tmp2,sm;
  sm = sum(a);
  for(int i = 1; i < b ; i++){
    tmp1 = (((sm * i)%Mod) * b)%Mod;
    tmp2 = (((i% Mod)*(a% Mod)) % Mod);
    tmp = tmp1 + tmp2;
    out += tmp %Mod;
  }
  cout<<out%Mod<<endl;
  return 0;
}
