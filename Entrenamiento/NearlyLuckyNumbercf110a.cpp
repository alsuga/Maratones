#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
  char in[20];
  scanf("%s",in);
  int cont = 0;
  for(int i=0; in[i] != '\0'; i++){
    if(in[i] == '4' or in[i] == '7') cont++;
  }
  if(cont == 7 or cont == 4) puts("YES");
  else puts("NO");
  return 0;
}