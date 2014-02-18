#include <cmath>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
  int acum = 0, max = 0,num;
  char c;
  while(scanf("%i",&num)){
    acum = num;
    max = 0;
    while(true){
      scanf("%i",&num);
      if(acum + num < acum){
       if(acum > max) max = acum;
       acum = 0;
       //if(acum < 0) acum = 0;
      }
      else acum += num;
      scanf("%c",&c);
      if(c == '\n')break;
    }
    if(acum > max) max = acum;
    printf("%i\n",max);
  }
  return 0;
}