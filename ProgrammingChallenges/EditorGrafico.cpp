#include <cstdio>
#include <stack>
#include <iostream>

using namespace std;

int mat[250][250];
int M,N;

void crear(){
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      mat[i][j] = 'O';
    }
  }
}

void pintar(){
  int x,y,c;
  scanf("%i %i %c",&x,&y,&c);
  mat[y-1][x-1] = c;
}

void vertical(){
  int x,y1,y2,c;
  scanf("%i %i %i %c",&x,&y1,&y2,&c);
  for(int i = y1-1; i < y2; i++){
    mat[i][x-1]=c;
  }
}

void horizontal(){
  int x1,x2,y,c;
  scanf("%i %i %i %c",&x1,&x2,&y,&c);
  for(int i = x1-1; i < x2; i++){
    mat[y-1][i]=c;
  }
}

void rectangulo(){
  int x1,x2,y1,y2,c;
  scanf("%i %i %i %i %c",&x1,&x2,&y1,&y2,&c);
  for(int i = y1-1; i < y2; i++){
    for (int j = x2-1; j < x2; j++){
      mat[i][j] = c;
    }
  }
}

void rellenar(){
  int x,y,c, l1, l2;
  scanf("%i %i %c",&x,&y,&c);
  if(mat[y-1][x-1] == c) return ;
  stack< pair<int,int> > pila;
  pila.push(make_pair(y-1,x-1));
  char color = mat[y-1][x-1];
  mat[y-1][x-1] = c;
  while(!pila.empty()){
    x = pila.top().first;
    y = pila.top().second;
    pila.pop();
    if(x-1 >= 0) if(mat[x-1][y] == color){
      mat[x-1][y] = c;
      pila.push(make_pair(x-1,y)); 
    }
    if(x+1 < N) if(mat[x+1][y] == color){
      mat[x+1][y] = c;
      pila.push(make_pair(x+1,y)); 
    }
    if(y-1 >= 0) if(mat[x][y-1] == color){
      mat[x][y-1] = c;
      pila.push(make_pair(x,y-1)); 
    }
    if(y+1 < M) if(mat[x][y+1] == color){
      mat[x][y+1] = c;
      pila.push(make_pair(x,y+1)); 
    }
  } 
}

void imprimir(){
  string st;
  cin>>st;
  cout<<st<<endl;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      printf("%c",mat[i][j]);
    }
    puts("");
  }
}

void llamar(string c){
  int x,y,z;
  char in;
  string name;
  if(c == "I"){
    scanf("%i %i",&M,&N);
    crear();
  }
  if(c == "C") crear();
  if(c == "L") pintar();
  if(c == "V") vertical();
  if(c == "H") horizontal();
  if(c == "K") rectangulo();
  if(c == "F") rellenar();
  if(c == "S") imprimir();

}

int main(){
  string tmp;
  while(true){
    cin>>tmp;
    if(tmp == "X") break;
    llamar(tmp);
  }
  return 0;
}