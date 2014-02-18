#include <cstdio>

int main(){
  int n;
  while(scanf("%i",&n) == 1){
    printf("%c\n", (n % 6)? 'N':'Y');
  }
  return 0;
}