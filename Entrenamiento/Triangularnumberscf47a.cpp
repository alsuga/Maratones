#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
  int i, a;
  scanf("%i",&i);
  i*= 2;
  a = sqrt(i);
  if(a * (a+1)  == i) puts("YES");
  else puts("NO");
  return 0;
}