#include<bits/stdc++.h>

using namespace std;

int calc(int m, int w, int value) {
  int a = 150 * value;
  int b = (500 - (2*m)) * (value) - (50 * w);
  return max(a, b);
}

int main() {
  vector<int> m(5);
  vector<int> w(5);
  int gh, bh;
  //double out = 0.0;
  int out = 0;
  for(int i = 0; i < 5; i++)
    cin >> m[i];
  for(int i = 0; i < 5; i++)
    cin >> w[i];
  cin >> gh >> bh;
  for(int i = 0; i < 5; i++) {
    out += calc(m[i], w[i], i + 1);
  }
  out += gh * 100;
  out -= bh * 50;
  out = max(0, out);
  cout << int(out) << endl;
  return 0;
}
