#include<bits/stdc++.h>

using namespace std;

int main() {
  int x, y, z;
  cin >> x >> y >> z;
  int r1, r2, r3;
  r1 = x + z + y;
  r2 = 2 * x + 2 * y;
  r1 = min(r1, r2);
  r2 = 2 * x + 2 * z;
  r1 = min(r1, r2);
  r2 = 2 * y + 2 * z;
  r1 = min(r1, r2);
  cout << r1 << endl;
  return 0;
}
