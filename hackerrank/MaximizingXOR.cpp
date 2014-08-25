#include <bits/stdc++.h>

using namespace std;

int main(){
  int max = 0,l,r;
  scanf("%i %i", &l,&r);
  for (int i = l; i <= r; ++i){
    for(int j = i+1; j <= r; j++){
      if((i^j) > max) max = i^j;
    }
  }
  printf("%i\n",max );
  return 0;
}