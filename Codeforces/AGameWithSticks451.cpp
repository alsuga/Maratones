#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,m,out;
  scanf("%i %i", &n, &m);
  if(n < m ) m = n;
  else n = m;
  out = n*m;
  if(out % 2 == 0) puts("Malvika");
  else puts("Akshat");
  return 0;
}