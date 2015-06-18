#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){__
  int r,c;
  cin >> r >> c;
  string val[501];
  int x1,x2, y1,y2, i, j;
  for(int i = 0; i < r; i++)
    cin>>val[i];
  cin >> x1 >> y1 >> x2 >> y2;
  x1--;
  y1--;
  x2--;
  y2--;
  stack<pair<int,int> > q;
  map<pair<int,int>, bool > visited;
  val[x1][y1] = 'X';
  q.push(make_pair(x1,y1));
  pair<int, int> pa;
  while( !q.empty() ) {
    pa = q.top();
    visited[pa] = true;
    q.pop();
    i = pa.first;
    j = pa.second;
    if(pa.first == x2 and pa.second == y2) {
      bool flag = false;
      if(val[x2][y2] != 'X' or !(x1 != x2 and y1 != y2) ) {
        if(i > 0)   if(val[i-1][j] != 'X')
          flag = true;

        if(i+1 < r) if(val[i+1][j] != 'X')
          flag = true;

        if(j > 0)   if(val[i][j-1] != 'X')
          flag = true;

        if(j+1 < c) if(val[i][j+1] != 'X')
          flag = true;
      } else
        flag = true;
      if(!flag)
        break;
      cout << "YES" <<endl;
      return 0;
    }
    if(i > 0)   if(val[i-1][j] != 'X' or (i-1 == x2 and j == y2)) {
      q.push(make_pair(i-1, j));
      if(!(i-1 == x2 and j == y2))val[i-1][j] = 'X';
    }
    if(i+1 < r) if(val[i+1][j] != 'X' or (i+1 == x2 and j == y2)) {
      q.push(make_pair(i+1, j));
      val[i+1][j] = 'X';
      if(!(i+1 == x2 and j == y2))val[i+1][j] = 'X';
    }

    if(j > 0)   if(val[i][j-1] != 'X' or (i == x2 and j-1 == y2)) {
      q.push(make_pair(i, j-1));
      val[i][j-1] = 'X';
      if(!(i == x2 and j-1 == y2))val[i][j-1] = 'X';
    }

    if(j+1 < c) if(val[i][j+1] != 'X' or (i == x2 and j+1 == y2)) {
      q.push(make_pair(i, j+1));
      val[i][j+1] = 'X';
      if(!(i == x2 and j+1 == y2))val[i][j+1] = 'X';
    }
  }
  cout << "NO" <<endl;
  return 0;
}
