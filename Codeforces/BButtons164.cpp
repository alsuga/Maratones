#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
  int n, ac=0,limit;
  scanf("%i",&n);
  ac = n;
  if(n%2 == 0) {
    ac += (n*n)/4;
    limit = n/2;
  }
  else limit = n/2 +1; 
  for(int i=1; i < limit; i++){
    ac += 2 * ((n-i) * (i));
  }
  printf("%i\n", ac );
  return 0;
}