#include <bits/stdc++.h>

using namespace std;

int main(){
  int test; scanf("%i",&test);
  map<long long, bool> mapa;
  long long uno = 0, dos = 1,tmp;
  while(dos <= 10e10){
    tmp = uno+dos;
    uno = dos;
    dos = tmp;
    mapa[dos] = true;
  }
  while(test--){
    scanf("%lld",&tmp);
    if(mapa[tmp]) puts("IsFibo");
    else puts("IsNotFibo");
  }
  return 0;
}