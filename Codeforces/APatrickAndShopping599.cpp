#include <bits/stdc++.h>

using namespace std;

int main() {
  int x, y, z;
  int act;
  cin >> x >> y >> z;
  act = x + y + z;
  act = min (act, 2 * x + 2 * y);
  act = min (act, 2 * x + 2 * z);
  act = min (act, 2 * z + 2 * y);
  cout << act << endl;
}
