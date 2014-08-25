#include <bits/stdc++.h>

using namespace std;

long dig(int b, int n){
  int inc=1, now = 0;
  long carry = 0,acum  = 0,tmp;
  b = b*b;
  for(int i = 0; i < (2*n -1); i++){
    if(i >= n) inc = -1;
    now += inc;
    tmp = now * b + carry;
    acum +=  (tmp)%10;
    carry = tmp /10;
  }
  while(carry){
    acum += carry%10;
    carry /= 10;
  }
  return acum;
}

int main(){
  int b=1,n=1;
  long out;
  while(true){
    scanf("%i %i",&b,&n);
    if(b+n == 0) break;
    if(b == 1 or b == 2 or b == 4 or b == 8 or b== 5 or b == 7) out = dig(b,n);
    if(b == 3 or b ==6 or b == 9) out = 9*n;
    printf("%ld\n", out);
  }
  return 0;
}
