#include <cstdio>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int in, di,cont = 0;
  long long n;
  scanf("%i %i",&in, &di);
  while(in--){
    scanf("%lld",&n);
    if(n % di == 0) cont++;
  }
  printf("%i\n",cont);
  return 0;
}