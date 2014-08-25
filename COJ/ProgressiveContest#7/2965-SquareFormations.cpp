#include <bits/stdc++.h>
using namespace std;

bool check(double in){
  int tmp = sqrt(in);
  if(sqrt(in) == tmp) return true;
  return false;
}

int main(){
  int test,k,out; scanf("%i",&test);
  for(int caso = 1; caso <= test; caso++){
    scanf("%i", &k);
    for(int i =  2;  i < 1000; i++){
      if( check(i*i) and check((i*i-k)/2.0 + k) and (i*i - k) > 0  ){
        out = i*i;
        break;
      }
    }
    printf("Case %i: %i\n", caso, out - k);
  }
  return 0;
}