#include <bits/stdc++.h>

using namespace std;

long long gcd ( long long a, long long b ){
  long long c;
  if(a > b) swap(a,b);
  while (a) {
     c = a; 
     a = b%a;  
     b = c;
  }
  return b;
}

int main(){
  long long rat,a,b,x,y,red;
  cin>>a>>b>>x>>y;
  red = gcd(x,y);
  x/= red;
  y/= red;
  rat = a / x;
  if(rat > b/y) rat = b/y;
  a = rat * x;
  b = rat *y;
  if(a < 1 or b < 1) puts("0 0");
  else cout<<a<<" "<<b<<endl;
  return 0;
}