#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  long long l,d,s,c,out;
  scanf("%d",&t);
  while(t--){
    scanf("%lld %lld %lld %lld",&l,&d,&s,&c);
    out = pow(c+1,d-1)*s;
    if(out >= l) puts("ALIVE AND KICKING");
    else puts("DEAD AND ROTTING");
  }
  return 0;
}