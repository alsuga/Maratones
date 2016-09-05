#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, area = -1;
  cin >> n;
  int x[4], y[4];
  cin >> x[0] >> y[0];
  for(int i = 1; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      if(x[i] != x[j] and y[i] != y[j]) {
        area = abs(x[i] - x[j]);
        area *= abs(y[i] - y[j]);
        i = n;
        break;
      }
    }
  }
  cout << area << endl;
  return 0;
}
