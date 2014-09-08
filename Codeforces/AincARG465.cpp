#include <bits/stdc++.h>

using namespace std;

int main(){
  int a, num = 0,num2, cont = 1; cin>>a;
  char in[13],tmp;
  for(int i = 0; i < 13 ; i++) in[i] = 0;
  for(int i = 0; i < a ; i++){
    cin>>tmp;
    if(tmp == '1') in[i/8] |= 1<<(i%8);
  }
  for(int i = 0; i < a; i++){
    if(in[i/8] & 1<<(i%8)) cont++;
    else break;
    //if(((num>>i)& 1) ^ ((num2>>i)&1) ) cont++;
  }
  if(a < cont) cont = a; 
  cout<<cont<<endl;
  return 0;
}
