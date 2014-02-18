#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

long mod_pow(long a, long b, long c = 1e9){
  long x = 1, y = a%c;
  while(b > 0){
    if(b%2 == 1) x = (x*y)%c;
    y = (y * y) %c;
    b>>=1;
  }
  return x%c;
}

int main(){
  int test;
  long a,b;
  scanf("%i", &test);
  while(test--){
    scanf("%ld %ld",&a,&b);
    printf("%ld\n",mod_pow(a,b));
  }
  return 0;
}