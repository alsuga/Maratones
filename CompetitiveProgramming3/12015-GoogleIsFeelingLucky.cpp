#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){__
  int n, val, mx;
  cin >> n;
  string in;
  for(int caso = 1; caso <= n; caso++) {
    map<int, vector<string> > mapa;
    mx = -1;
    for(int i = 0; i < 10; i++) {
      cin >> in >> val;
      mapa[val].push_back(in);
      mx = max(mx, val);
    }
    cout << "Case #" << caso << ":\n";
    for(int i = 0; i < mapa[mx].size(); i++) {
      cout << mapa[mx][i] << endl;
    }
  }
  return 0;
}
