#include <cstdio>
#include <iostream>

using namespace std;

int main(){
  int test, num,max,tmp;
  scanf("%i",&test);
  for(int i = 1; i<= test;i++){
    scanf("%i",&num);
    max = 0;
    printf("Case %i: %i ",i,num+1);
    while(num--){
      scanf("%i",&tmp);
      if(tmp > max) max = tmp;
    }
    printf("%i\n",max +1);
  }
  return 0;
}