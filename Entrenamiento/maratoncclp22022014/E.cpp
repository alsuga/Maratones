#include<bits/stdc++.h>

using namespace std;

int main(){
  int N,x,o,xx,oo;
  char tic[3][3],tmp;
  scanf("%i",&N);
  bool flag = false; 
  while(N--){
    xx = 0;
    oo = 0;
    if(flag) scanf("%c",&tmp);      
    else flag = true;
    for(int i = 0; i<3; i++){
      scanf("%c",&tmp);
      for(int j = 0; j<3; j++){
        scanf("%c", &tic[i][j]);
        if(tic[i][j] == 'X') xx++;
        if(tic[i][j] == 'O') oo++;
      }
    }
    if(xx-oo < 0 or xx-oo > 1){
     puts("no");
     continue;
    }
    x= 0;
    o = 0;
    for(int i = 0; i < 3 ; i++){
      if(tic[i][0] == tic[i][1] and tic[i][1] == tic[i][2]){
        if(tic[i][0] == 'X') x++;
        if(tic[i][0] == 'O') o++;  
      }
      if(tic[0][i] == tic[1][i] and tic[1][i] == tic[2][i]){
        if(tic[0][i] == 'X') x++;
        if(tic[0][i] == 'O') o++;        
      } 
    }
    
    if(tic[0][0] == tic[1][1] and tic[1][1] == tic[2][2]){
      if(tic[0][0] == 'X') x++;
      if(tic[0][0] == 'O') o++;  
    }
    if(tic[0][2] == tic[1][1] and tic[1][1] == tic[2][0]){
      if(tic[0][2] == 'X') x++;
      if(tic[0][2] == 'O') o++;        
    }
    if(x > 0 and o > 0) puts("no");     
    else if((x > 0 and xx != oo+1) or (o > 0 and xx != oo ) ) puts("no");
         else puts("yes");
  }
  return 0;
}































