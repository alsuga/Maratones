#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){__
  int in;
  cin>>in;
  int vec[10][10];
  for(int i = 0; i < 10; i++)
    vec[0][i] = 1;
  for(int i = 1; i < 10; i++){
    int acum = 0;
    for(int j = 0; j < 10; j++){
      acum += vec[i-1][j];
      vec[i][j] = acum;
    }
  }
  cout<<vec[in-1][in-1]<<endl;
  return 0;
}
