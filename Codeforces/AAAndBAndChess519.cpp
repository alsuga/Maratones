#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  string board[8];
  int out = 0;
  map<char, int> weight;
  weight['q'] = -9;
  weight['r'] = -5;
  weight['b'] = -3;
  weight['n'] = -3;
  weight['p'] = -1;

  weight['Q'] =  9;
  weight['R'] =  5;
  weight['B'] =  3;
  weight['N'] =  3;
  weight['P'] =  1;
  for(int i = 0; i < 8; i++)
    cin >> board[i];
  for(int i = 0; i < 8; i++){
    for(int j = 0; j < 8; j++){
      out += weight[board[i][j]];
    }
  }
  if(out > 0) cout<<"White"<<endl;
  if(out < 0) cout<<"Black"<<endl;
  if(out == 0) cout<<"Draw"<<endl;
  return 0;
}
