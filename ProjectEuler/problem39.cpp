#include <bits/stdc++.h>

using namespace std;

int main(){
  double tmp;
  int tmp1,may = 0,p;
  map<int,int> mapa;
  for(int i = 1; i<1000; i++){
    for(int j = 1; j<1000; j++){
      tmp = hypot(i,j);
      if(int(tmp) +i + j > 1000) continue;
      if(tmp == int(tmp)){
        mapa[int(tmp) +i + j]++;
        if(mapa[int(tmp) +i + j] > may) {
          p = int(tmp) +i + j;
          may = mapa[int(tmp) +i + j];
        }
      }
    }
  }
  cout<<p<<" "<<may<<endl;
  return 0;
}

