#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

double log_pow(int b, int e){
  return e * log10(b);
}

int main(){
  int test,b,e,bb,ee;
  while(true){ 
    scanf("%i",&test);
    if(test == 0) break;
    double may = 0,tmp;
    while(test--){
      scanf("%d %d",&b,&e);
      tmp = log_pow(b,e);
      if(tmp > may) {
        bb = b;
        ee = e;
        may = tmp;
      }
    }
    printf("%i %i\n",bb,ee);
  }
  return 0;
}