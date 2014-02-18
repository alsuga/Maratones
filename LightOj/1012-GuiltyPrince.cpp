#include <stack>
#include <cstdio>
#include <iostream>

using namespace std;

typedef pair<int,int> Pos;

int main(){
  int test,h,w,x,y,caso = 0;
  char mat[21][21],tmp;
  scanf("%i",&test);
  while(test--){
    scanf("%i %i",&w,&h);
    stack <Pos> pila;
    int cont = 0;
    for(int i = 0; i < h; i++){
      scanf("%c",&tmp);
      for(int j = 0; j< w; j++){
        scanf("%c",&mat[i][j]);
        if(mat[i][j] == '@') pila.push(make_pair(i,j));
      }
    }
    while(!pila.empty()){
      x = pila.top().first;
      y = pila.top().second;
      pila.pop();
      cont++;
      if(x>0) 
        if(mat[x-1][y] == '.') {
          pila.push(make_pair(x-1,y));
          mat[x-1][y] = '#';
        }
      if(y>0)
        if(mat[x][y-1] == '.') { 
          pila.push(make_pair(x,y-1));
          mat[x][y-1] = '#';
        }
      if(x+1<h)
        if(mat[x+1][y] == '.'){ 
          pila.push(make_pair(x+1,y));
          mat[x+1][y] = '#';
        }
      if(y+1<w)
        if(mat[x][y+1] == '.') {
          pila.push(make_pair(x,y+1));
          mat[x][y+1] = '#';
        }
    }
    printf("Case %i: %i\n",++caso,cont);
  }
  return 0;
}