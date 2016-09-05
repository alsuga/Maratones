#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef vector<pii> vii;

int solve(vii &stars) {
  int out = 0;

  return out;
}

int main() {
  int test, num, out; cin >> test;
  vii stars;
  for(int caso = 1; caso <= test; ++caso) {
    cin >> num;
    stars.resize(num);
    for(int i = 0; i < num; ++i)
      cin >> stars[i].first >> stars[i].second;
    out = solve(stars);
  }
  return 0;
}
