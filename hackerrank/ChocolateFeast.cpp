#include <bits/stdc++.h>

using namespace std;

int main(){
  int test,n,c,m,out,emp,tmp; scanf("%i",&test);
  while(test--){
    out = 0;
    scanf("%i %i %i", &n,&c,&m);
    out = n/c;
    emp = out;
    while(emp >= m){
      tmp = emp / m;
      emp = tmp + emp%m;
      out +=tmp;
    }
    printf("%i\n",out );
  }
  return 0;
}