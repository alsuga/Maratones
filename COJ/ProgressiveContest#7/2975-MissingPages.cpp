#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, p, tmp;
  while(true){
    scanf("%i", &n);
    if( n == 0 ) break;
    scanf("%i",&p);
    if(p <= n/2){
      if(p%2 == 0) {
        printf("%i ", p-1);
        tmp = p-1;
      }else {
        printf("%i ", p+1);
        tmp = p;
      }
      printf("%i %i\n", n - tmp, n - tmp + 1);
    }else{
      if(p%2 != 0 ) tmp = p;
      else tmp = p-1;
      printf("%i %i ", n - tmp, n - tmp+1);
      if(tmp == p) printf("%i\n", p+1);
      else printf("%i\n", p-1);
    }
  }
  return 0;
}