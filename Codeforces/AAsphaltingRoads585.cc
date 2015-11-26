#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<bool> xx(50, false);
  vector<bool> yy(50, false);
  int roads; cin >> roads;
  int x, y;
  vector<int> days;
  for(int i = 0; i < roads * roads; i++) {
    cin >> x >> y;
    x--; y--;
    if(xx[x] or yy[y])
      continue;
    xx[x] = true;
    yy[y] = true;
    days.push_back(i + 1);
  }
  for(int i = 0; i < days.size(); i++) {
    if(i) cout << " ";
    cout << days[i];
  }
  cout << endl;
  return 0;
}
