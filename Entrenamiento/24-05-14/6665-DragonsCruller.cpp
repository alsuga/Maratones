#include <bits/stdc++.h>

using namespace std;

typedef map<int, pair<int,int> > meta;
typedef vector<vector<int> > tb;

//representar en enteros

tb genmove(tb &in,int dic){
  pair<int,int> po;
  tb tablero;  
  for(int i = 0; i < 3; i++){
    tablero.push_back(vector<int> vec(3));
    for(int j = 0; j < 3; j++){
      tablero[i][j] = in[i][j];
      if(in[i][j] == 0) po = make_pair(i,j);
    }
  }
  int x= po.first,y= po.second;
  if(dic == 0) x =  (po.first+ po.second*3) -1 % 9;
  if(dic == 1) x =  (po.first+ po.second*3) +1 % 9;
  if(dic <= 1){
    y = x % 3;
    x = x / 3;
  }
  if(dic == 2) y =  po.second-1 % 3;
  if(dic == 3) y =  po.second+1 % 3;
  swap(tablero[po.first][po.second], tablero[x][y]);
  return tablero;
}

int main(){
  int ch, cv, in;
  tb tablero;
  meta pos;
  while(cin>>ch>>cv){
    for(int i = 0; i < 3; i++){
      tablero.push_back(vector<int> vec(3));
      for(int j = 0; j < 3; j++){
        scanf("%i",  &tmp);
        tablero[i][j] = tmp;
      }
    }
    for(int i = 0; i < 3; i++){
      for(int j = 0; j < 3; j++){
        scanf("%i", &in);
        pos[in] = make_pair<i,j>;
      }
    }
    queue<tb> cola;
    set <tb> myset;
    cola.push(tablero);
    while( !cola.empty() ){
      tb tmp = cola.top(),tmp2;
      cola.pop();
      for(int i = 0; i < 4; i++){
        tmp2 = genmove(tmp,i);
        if( myset.count(tmp2) == 0 ){
          cola.push(tmp2);
          myset.push(tmp2);
        }
      }

    }

  }

  return 0;
}