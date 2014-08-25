#include <bits/stdc++.h>
using namespace std;

char mine[50][50];
int R,C,M;

bool check(int i, int j){
  if( (i == R-1 and j== C-2) or (i==R-1 and j==C-1) ) return false;
  if( (i == R-2 and j== C-2) or (i==R-2 and j==C-1) )  return false;
  return true;
}

int main(){
  int T,caso=0;
  scanf("%i",&T);
  while(T--) {
      scanf("%i %i %i",&R,&C,&M);
      printf("Case #%i:\n", ++caso);
      if(R*C - (M + 2) < 0){
        puts("Impossible");
        continue;
      }
      bool flag;
      mine[R-1][C-1] = 'c';
      for(int i = 0; i<R; i++){
        for(int j = 0; j<C; j++){
          flag = true;
          if(i == R-1 and j == C-1) break;
          if(M and  check(i,j)){
            mine[i][j] = '*';
            M--;
          }else mine[i][j] = '.';
        }
      }
      if(M > 0) puts("Impossible");
      else{
        for(int i = 0; i<R; i++){
          for(int j = 0; j<C; j++){
            printf("%c",mine[i][j]);
          }
          puts("");
        }
      }
  }
  return 0;
}