#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  string st;
  cin >> n;
  map<string, int> mapa;
  char a, b = 0;
  string tmp;
  bool fg;
  for(int i = 0; i < n; i++) {
    cin >> st;
    a = st[0];
    b = 0;
    fg = true;
    tmp = "";
    for(int i = 1; i < st.size(); i++) {
      cout << "-> "<< a << " - " << b << " : " << st[i] << " <- " << endl;
      if(st[i] == a or st[i] == b)
        continue;
      if(b == 0) {
        b = st[i];
        if(a > b) swap(a, b);
      } else {
        fg = false;
        break;
      }
    }
    if(fg) {
      tmp += a;
      if(b != 0)
        tmp += b;
      mapa[tmp] += st.size();
      cout << endl << tmp << ": " << mapa[tmp] << endl;
    } else cout << endl << tmp <<  endl;
  }
  int out = 0;
  for(auto it = mapa.begin(); it != mapa.end(); ++it) {
    out = max(out, it-> second);
  }
  cout << out << endl;
  return 0;
}
