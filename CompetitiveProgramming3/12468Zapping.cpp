#include<bits/stdc++.h>

using namespace std;

int main() {
  int a, b, out;
  while(true) {
    cin >> a >> b;
    if(a == -1 and b == -1) break;
    out = abs(a - b);
    out = min(out, 100 - out);
    cout << out << endl;
  }
  return 0;
}
