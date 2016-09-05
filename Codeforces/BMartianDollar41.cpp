#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, b, p;
  cin >> n >> b;
  cin >> p;
  int mn = p, mx = b, md = b % p, tmp = b / mn;

  for(int i = 1; i < n; i++) {
    cin >> p;
    if(mx < (tmp * p + md))
      mx = tmp * p + md;
    if(mn > p) {
      mn = p;
      md = b % p;
      tmp = b / mn;
    }
  }
  cout << mx << endl;
  return 0;
}
