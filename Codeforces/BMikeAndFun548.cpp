#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){__
  int n, m, q, x, y, mx,act;
  cin >> n >> m >> q;
  int mat[520][520], sum[520];
  for(int i = 0; i < n; i++) {
    sum[i] = 0;
    act = 0;
    mx = 0;
    cin >> mat[i][0];
    act = mat[i][0];
    for(int j = 1; j < m; j++) {
      cin >> mat[i][j];
      if(mat[i][j-1] + mat[i][j] == 2) act++;
      else {
        mx = max(mx,act);
        act = mat[i][j];
      }
    }
    sum[i] = max(mx,act);
  }
  while(q--) {
    cin >> x >> y;
    x--;
    y--;
    mat[x][y] = 1 - mat[x][y];
    mx = 0;
    act = mat[x][0];
    for(int i = 1; i < m; i++) {
      if(mat[x][i-1] + mat[x][i] == 2) act++;
      else {
        mx = max(mx,act);
        act = mat[x][i];
      }
    }
    mx = max(mx,act);
    sum[x] = mx;
    mx = 0;
    for(int i = 0; i < n; i++)
      mx = max(mx, sum[i]);
    cout<<mx<<endl;
  }
  return 0;
}
