#include <cstdio>
#include <iostream>

using namespace std;

int main(){
  int n,x,y;
  scanf("%i %i %i",&n,&x,&y);
  if((n/2 == x or n/2 +1 == x) and (n/2 == y or n/2 +1 == y)) puts("NO");
  else puts("YES");
  return 0;
}