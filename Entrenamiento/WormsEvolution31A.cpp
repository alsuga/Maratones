#include <vector>
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
  int test,act;
  scanf("%i",&test);
  int vec[102];
  for(int i = 0; i<test;i++){
    scanf("%i",&vec[i]);
  }
  for(int i = 0; i<test; i++){
    for(int j = 0; j<test ; j++){
      if(j == i) continue;
      for(int k = 0; k<test; k++ ){
        if(k == j or k == i) continue;
        if(vec[i] + vec[j] == vec[k]){
          printf("%i %i %i\n",k+1,j+1,i+1);
          return 0;
        }
      }
    }
  }
  puts("-1");
  return 0;
}