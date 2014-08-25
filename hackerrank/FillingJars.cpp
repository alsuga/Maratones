#include <bits/stdc++.h>

using namespace std;

int main(){
  int m,a,b,k;
  double n,out=0,an,bn,un;
  long long out2;
  scanf("%lf %i",&n,&m);
  while(m--) {
    scanf("%i %i %i",&a,&b,&k);
    un = 1/n;
    bn = b/n;
    an = a/n;
    out += (bn - an + un) * k;
  }
  out2 = (long long) out;
  printf("%lld\n", out2 );
  return 0;
}