#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){__
  int mat[101][101];
  int n;
  while(cin >> n) {
    vector<int> q;
    for(int i = 0; i < n; i++)
      for(int j = 0; j < n; j++)
        cin>>mat[i][j];
    bool t = true;
    for(int i = 0; i < n; i++) {
      t = true;
      for(int j = 0; j < n and t; j++) {
        if(mat[i][j] == 1 or mat[i][j] == 3)
          t = false;
      }
      if(t)
        q.push_back(i);
    }
    cout<<q.size()<<endl;
    for(int i = 0; i < q.size(); i++) {
      if(i)cout<<" ";
      cout<<q[i]+1;
    }
    cout<<endl;
  }
  return 0;
}
