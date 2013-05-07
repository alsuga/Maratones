#include <cstdio>
#include <iostream>

using namespace std;

int main(){
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  int n,m,max,mn=0,mm=0;
  scanf("%i %i",&n,&m);
  max = n+m;
  if(m<n)mm = 1;
  else mn = 1;
  for(int i = 0; (n > 0 or m > 0) and i < max;i++){
    if((n>0 and i%2 == mn) or (m == 0 and n>0) ){
      printf("B");
      n--;
    }
    if((m>0 and i%2 == mm) or (n == 0 and m>0 )) {
      printf("G");
      m--;
    }
  }
  printf("\n");
  return 0;
}