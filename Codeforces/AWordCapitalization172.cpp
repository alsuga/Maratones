#include <iostream>
#include <cstdio>
#include <cctype>

using namespace std;

int main(){
  char a;
  bool flag = false;
  scanf("%c",&a);
  a = toupper(a);
  printf("%c",a);
  while(scanf("%c",&a) != EOF){
    printf("%c",a);
    if(a == '\n') flag = true;
  }
  if(flag) printf("\n");
  return 0;
}