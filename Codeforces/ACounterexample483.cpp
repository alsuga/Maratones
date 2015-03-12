#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

ull gcd(ull u, ull v) {
  while ( v != 0) {
    ull r = u % v;
    u = v;
    v = r;
  }
  return u;
}

int main(){
  unsigned long long l,r; cin>>l>>r;
  bool flag = true;
  for(ull i = l; i <= r and flag; i++){
    for(ull j = i+1; j <= r and flag; j++){
      for(ull k = j+1; k <= r and flag; k++){
        if(gcd(i,j) + gcd(j,k) == 2 and gcd(i,k) > 1){
          flag = false; 
          cout<<i<<" "<<j<<" "<<k<<endl;
        }
      }
    }
  }
  if(flag) cout<<-1<<endl;
  return 0;
} 
