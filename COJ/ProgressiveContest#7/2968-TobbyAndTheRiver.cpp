#include <bits/stdc++.h>

using namespace std;

int main(){
  int dogs[6],test,parcial,total;
  scanf("%i",&test);
  while(test--){
    int total = 0;
    bool flag = false;
    for(int i =0; i < 6; i++) {
      scanf("%i",&dogs[i]);
      total+= dogs[i];
    }
    for(int mask = 1; mask < 64 ; mask++){
      parcial = 0;
      for(int i = 0; i < 6; i++)  if( (1<<i) & mask ) parcial += dogs[i];
      if(parcial == total - parcial) {
        flag = true;
        break;
      }
    }
    if(flag) puts("Tobby puede cruzar");
    else puts("Tobby no puede cruzar");
  }

  return 0;
}