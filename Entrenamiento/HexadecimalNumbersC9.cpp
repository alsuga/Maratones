#include <string>
#include <iostream>
#include <cstdio>

using namespace std;

bool check(int i){
  while(i>0){
    if(i%10 != 1 and i%10 != 0) return false;
    i/=10;
  }
  if(i == 0) return true;
}

int main(){
  int st;
  scanf("%i",&st);
  int acum = 0;
  for(int i = 1; i<= st;i++){
    if(check(i) ) acum += 1;
  }
  printf("%i\n", acum);
  return 0;
}