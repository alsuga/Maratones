#include <bits/stdc++.h>

using namespace std;

int nueves(long long tmp){
  int nines = 0;
  while(tmp %10 == 9){
    nines++;
    tmp/= 10;
  }
  return nines;
}

int main(){
  long long mod=1,price, max, out;
  int  t1,t2;
  cin>>price>>max;

  while( ( (price%(mod*10) +1) <= max ) and (log10(mod*10)  <= log10(price) ) ){
    mod*=10;
  }
  out = price - (price%mod) -1;
  t1 = nueves(price);
  t2 = nueves (out);

  if(t1 >= t2 or max == 0) out = price;
  cout<<out<<endl;
  return 0;
}


