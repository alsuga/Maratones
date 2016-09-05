#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pii;

map<pii, long long> memo[41];

long long dp(int i, int x, int y, vi &X, vi &Y) {
  if(i == X.size())
    return(x == 0 and y == 0);
  long long a, b;
  pii tmp(x, y);
  if(memo[i].count(tmp) == 0) {
    a = dp(i + 1, x + X[i], y + Y[i], X, Y);
    b = dp(i + 1, x, y, X ,Y);
    memo[i][tmp] = a + b;
  }
  return memo[i][tmp];
}

int main() {
  int pairs;
  cin >> pairs;
  vi X(pairs);
  vi Y(pairs);
  for(int i = 0; i < pairs; i++) {
    cin >> X[i] >> Y[i];
  }

  long long ans = dp(0, 0, 0, X, Y) - 1;
  cout << ans << endl;

  return 0;
}
