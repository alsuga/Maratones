#include <cstdio>
#include <iostream>

using namespace std;

int main(){
  int test, in;
  scanf("%i",&test);
  while(test--){
    scanf("%i",&in);
    if (in%2 != 0) in--;
    printf("%i\n", in);
  }
  return 0;
}