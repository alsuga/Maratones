#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  while(cin >> a >> b) {
    int gcd = __gcd(a, b);
    a /= gcd;
    b /= gcd;
    cout << (a + b) * 2 << endl;
  }
  return 0;
}
