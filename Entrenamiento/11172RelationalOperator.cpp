#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main(){
  int test,uno,dos;
  scanf("%i",&test);
  while(test--){
    scanf("%i %i",&uno,&dos);
    printf("%c\n",((uno > dos)? '>': ((uno == dos)? '=': '<' )));
  }
  return 0;
}