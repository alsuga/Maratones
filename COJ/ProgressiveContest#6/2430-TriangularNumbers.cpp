#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

long long  sum(long long  l){
  return (l * (l+1)) / 2; 
}

int main(){
  long long  in,tmp;
  while(true){
    scanf("%lld",&in);
    if(in == 0) break;
    tmp = sqrt(2* in);
    if(sum(tmp) == in) puts("YES");
    else puts("NO");
  }
  return 0;
}
