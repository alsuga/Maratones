#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
  int n,k;
  scanf("%i %i",&n,&k);
  for(int i = 0; i<n-1;i++) printf("%i ",n-i);
  printf("%i\n",1);
  return 0;
}