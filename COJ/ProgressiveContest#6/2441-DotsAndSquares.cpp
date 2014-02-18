#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
  int test,i,j,ac;
  scanf("%i",&test);
  while(test--){
    scanf("%i %i",&i,&j);
    ac = 2*(i*j) - i - j;
    if(ac%2) puts("First");
    else puts("Second");
  }
  return 0;
}