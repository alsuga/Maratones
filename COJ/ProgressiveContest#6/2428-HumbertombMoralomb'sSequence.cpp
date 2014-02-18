#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
  long hm,tmp;
  while(true){
    scanf("%ld",&hm);
    if(hm == 0) break;
    tmp = ceil(sqrt(hm));
    printf("%ld\n",tmp);
  }
}