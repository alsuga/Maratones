#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){__
  int n;
  string a, b;
  cin >> n >> a >> b;
  int out = 0, tmp;
  for(int i = 0; i < n; i++) {
    tmp = abs(a[i] - b[i]);
    out += (tmp > 5)? 10 - tmp: tmp;
  }
  cout << out <<endl;
  return 0;
}
