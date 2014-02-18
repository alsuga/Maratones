#include <cstdio>
#include <iostream>

using namespace std;

int main(){
  int test, tmp;
  long long out,cant,cont;
  scanf("%i", &test);
  while(test--){
    cont = 0;
    scanf("%lld", &cant);
    for(int i = 0; i<cant; i++){
      scanf("%i",&tmp);
      if(tmp <= cant and tmp > 0) cont++;
    }
    out = (cont * (cont-1))/2;
    printf("%lld\n",out);
  }
  return 0;
}