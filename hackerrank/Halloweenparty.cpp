#include <bits/stdc++.h>

using namespace std;

int main(){
  int test;
  long long in, tmp,out;
  scanf("%i",&test);
  while(test--){
    scanf("%lld", &in);
    tmp = in/2;
    out = (in - tmp) * tmp;
    printf("%lld\n",out );
  }
  return 0;
}