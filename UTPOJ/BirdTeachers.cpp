#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int N,M,K,W,A,B,C,id;
  while(true){
    scanf("%i %i %i %i",&N,&M,&K,&W);
    if(N + M + K + W == 0) break;
    vector<int> vec (K,0);
    while(N--){
      scanf("%i %i %i",&A,&B,&C);
      while(B--){
        scanf("%i",&id);
        vec[id-1] += (W - C + 1)*M;
      }
    }
    for (int i = 0; i < vec.size(); ++i) printf("%i\n",vec[i]);
  }
  return 0;
}