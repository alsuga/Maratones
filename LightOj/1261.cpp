#include <cstdio>
#include <iostream>

using namespace std;

int main(){
  int test,c = 0;
  scanf("%i",&test);
  while(test--){
    int pos[30][30],wishes[30];
    int n,m,k,p;
    scanf("%i %i %i", &n, &m, &k);
    for (int i = 0; i < n; ++i){
      for (int j = 0; j < k; ++j){
        scanf("%i", &pos[i][j]);
      }
    }
    scanf("%i",&p);
    for (int i = 0; i < p; ++i) scanf("%i", &wishes[i]);
  }
  return 0;
}