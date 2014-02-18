#include <vector>
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
  int num[102][102],in,acum = 0;
  scanf("%i",&in);
  for(int i = 0; i<in;i++) for(int j = 0; j<in;j++) scanf("%i",&(num[i][j]));
  for(int i = 0; i<in; i++) {
    acum += num[i][i];
    if(in/2 != i) acum += num[(in/2)][i] + num[i][(in/2)];
    if(in-1-i != i) acum += num[i][in-1-i];
  }
  printf("%i\n",acum);
  return 0;
}