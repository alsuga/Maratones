#include <bits/stdc++.h>

using namespace std;

string tablero[8];

bool check(pair<int,int> king, int w){
  bool av[8] = {true,true,true,true,true,true,true,true}; 
  char tmp;
  for(int i = 1; i < 8  ; i++){  
    // vertical y horizontal
    if(king.first + i < 8 and av[0]){
      tmp = tablero[king.first +i][king.second];
      if(tmp == char('Q' + w)or tmp == char('R' + w)) return true;
      else if(tmp != '.') av[0] = false;
    }
    if(king.first - i >= 0 and av[1]){
      tmp = tablero[king.first -i][king.second] ;
      if(tmp == char('Q' + w)or tmp == char('R' + w)) return true;
      else if(tmp != '.') av[1] = false;
    }
    if(king.second + i < 8 and av[2]){
      tmp = tablero[king.first ][king.second + i] ;
      if(tmp == char('Q' + w)or tmp == char('R' + w)) return true;
      else if(tmp != '.') av[2] = false;
    }
    if(king.second - i >= 0 and av[3]){
      tmp = tablero[king.first][king.second - i] ;
      if(tmp == char('Q' + w)or tmp == char('R' + w)) return true;
      else if(tmp != '.') av[3] = false;
    }
    //diagonal
    if(king.first + i < 8 and king.second +i < 8 and av[4]){
      tmp = tablero[king.first + i][king.second + i];
      if(tmp == char('Q' + w)or tmp == char('B' + w)or ( i == 1 and tmp == char('P' + w)and w == 0) ) return true;
      else if(tmp != '.') av[4] = false; 
    }

    if(king.first - i >= 0 and king.second -i >= 0 and av[5]){
      tmp = tablero[king.first - i][king.second - i];
      if(tmp == char('Q' + w)or tmp == char('B' + w)or ( i == 1 and tmp == char('P' + w)and w != 0) ) return true;
      else if(tmp != '.') av[5] = false; 
    }
    if(king.first + i < 8 and king.second -i >= 0 and av[6]){
      tmp = tablero[king.first + i][king.second - i];
      if(tmp == char('Q' + w)or tmp == char('B' + w)or ( i == 1 and tmp == char('P' + w)and w == 0) ) return true;
      else if(tmp != '.') av[6] = false; 
    }

    if(king.first - i >= 0 and king.second +i < 8 and av[7]){
      tmp = tablero[king.first - i][king.second + i];
      if(tmp == char('Q' + w)or tmp == char('B' + w)or ( i == 1 and tmp == char('P' + w)and w != 0) ) return true;
      else if(tmp != '.') av[7] = false; 
    }
    
  }
  //caballo
  if(king.first + 1 < 8 and king.second+2 < 8){
    tmp = tablero[king.first + 1][king.second + 2];
    if(tmp == char('N' + w)) return true;
  }
  if(king.first + 2 < 8 and king.second+1 < 8){
    tmp = tablero[king.first + 2][king.second + 1];
    if(tmp == char('N' + w)) return true;
  }

  if(king.first - 1 >= 0 and king.second - 2 >= 0){
    tmp = tablero[king.first - 1][king.second - 2];
    if(tmp == char('N' + w)) return true;
  }
  if(king.first - 2 >= 0 and king.second - 1 >= 0){
    tmp = tablero[king.first - 2][king.second - 1];
    if(tmp == char('N' + w)) return true;
  }
  if(king.first + 1 < 8 and king.second - 2 >= 0){
    tmp = tablero[king.first + 1][king.second - 2];
    if(tmp == char('N' + w)) return true;
  }
  if(king.first + 2 < 8 and king.second - 1 >= 0){
    tmp = tablero[king.first + 2][king.second - 1];
    if(tmp == char('N' + w)) return true;
  }
  if(king.first - 1 >= 0 and king.second + 2 < 8){
    tmp = tablero[king.first - 1][king.second + 2];
    if(tmp == char('N' + w)) return true;
  }
  if(king.first - 2 >= 0 and king.second + 1 < 8){
    tmp = tablero[king.first - 2][king.second + 1];
    if(tmp == char('N' + w)) return true;  
  }
  return false;
}

int main(){
  string joker;
  int game = 0;
  while(true){
    pair<int, int> wk = make_pair(-1,-1) ,bk = make_pair(-1,-1) ;
    bool wch = false, bch = false;
    for(int i = 0; i < 8 ; i++) {
      cin>>tablero[i];
      for(int j = 0; j < 8; j++){
        if(tablero[i][j] == 'k') bk = make_pair(i,j);
        if(tablero[i][j] == 'K') wk = make_pair(i,j);
      }
    }
    if(wk.first == -1) break; 
    wch = check(wk,32);
    bch =  check(bk,0);
    printf("Game #%i: %s king is in check.\n",++game,( (wch)? "white": ((bch)? "black" : "no") ) );
  }
  return 0;
}
