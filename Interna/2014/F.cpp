#include <bits/stdc++.h>

using namespace std;

bool isq(int n){
  int tmp = sqrt(n);
  if(tmp*tmp == n) return true;
  return false;
}

int main(){
  int test,caso=0;
  scanf("%i",&test);
  int k;
  while(test--){
    scanf("%i",&k);
    int n = 2;
    for(; not(isq(n/2 +k) && isq(n+k)); n+=2);
    printf("Case %i: %i\n",++caso,n);
  }
  return 0;
}