#include <cstdio>
#include <iostream>

using namespace std;

int main(){
  int mat[101][101],max,in,n;
  scanf("%i",&n);
  while(n--){
    scanf("%i",&max);
    for(int i = 0; i<max; i++) 
      for(int j = 0; j< i+1; j++) scanf("%i",&mat[i][j]);

    for(int i = max-2; i >= 0; i--){
      for(int j = 0; j< i+1; j++){
        if(mat[i][j] + mat[i+1][j] > mat[i][j] + mat[i+1][j+1]) mat[i][j] += mat[i+1][j];
        else mat[i][j] += mat[i+1][j+1];
      }
    }    
    printf("%i\n",mat[0][0]);
  }
  return 0;
}