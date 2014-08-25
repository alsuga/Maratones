#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,m, out= 0;
  scanf("%i %i",&n,&m);
  while(n--){
    out++;
    if(out % m == 0)n++;
  }
  printf("%i\n", out);
  return 0;
}
