#include <bits/stdc++.h>

using namespace std;
vector<int> vec(6);


int main(){
  int test;
  scanf("%i",&test);
  while(test--){
    bool flag = true;
    int ac = 0,tmp; 
    for(int i = 0; i<6; i++){
      scanf("%i",&tmp);
      vec[i] = tmp;
      ac += tmp;
    }
    sort(vec.begin(), vec.end());
    if(ac%2 or ac / 2 < vec[5]) {
      puts("Tobby no puede cruzar");
      continue;
    }
    if(ac / 2 == vec[5]){
      puts("Tobby puede cruzar");
      continue;
    }
    vector<int> cof(6);
    for(int i = 0; i< 64; i++){
      int cof, tmp = 1,acum = 0;
      for(int j = 0; j< 6; j++){
        cof = (1<<j & i)? 1 : 0;
        acum += cof * vec[j];
      }
      if(acum == ac/2) {
        flag = false;
        puts("Tobby puede cruzar");
        break;
      }
    }
    if(flag) puts("Tobby no puede cruzar");
  }
  return 0;
} 