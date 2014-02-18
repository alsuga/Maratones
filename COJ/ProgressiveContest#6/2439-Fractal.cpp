#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int it(int L,int S){
  double a = log(5/3.0),b;
  b = log(S/(double)L);
  return b/a;
}

int main(){
  int test,L,S;
  scanf("%i",&test);
  while(test--){
    scanf("%i %i",&L,&S);
    cout<<it(L,S)<<endl;
  }
  return 0;
}