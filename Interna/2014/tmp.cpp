#include <bits/stdc++.h>
using namespace std;

long digsum(long in){
  long acum = 0;
  while(in){
    acum += in%10;
    in/=10;
  }
  return acum;
}

int main(){
  long in,acum;
  cin>>in;
  acum = in;
  while(acum < 10000000){
    cout<<acum<<" "<<digsum(acum*acum)<<endl;
    acum *= 10;
    acum += in;
  }
  return 0;
}