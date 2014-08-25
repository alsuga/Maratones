#include <bits/stdc++.h>

using namespace std;

int main(){
  int test,in,ci,tre;
  scanf("%i",&test);
  while(test--) {
      scanf("%i",&in);
      if(in == 1 or in == 2 or in == 4 or in == 7){
        puts("-1");
        continue;
      }
      ci = in/3;
      tre = in%3;
      while( in != (ci*3 + tre) or tre%5 != 0){
        ci--;
        tre += 3;
      }
      for(int i = 0; i < ci; i++) printf("555");
      for(int i = 0; i < tre/5; i++) printf("33333");
      puts("");
  }
  return 0;
}