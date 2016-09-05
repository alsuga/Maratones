#include<iostream>
#include<map>
#include<cmath>
using namespace std;

int main() {
  int test, n, in, act, out;
  cin >> test;
  for(int t = 0; t < test; t++) {
    cin >> n;
    out = 0;
    map<int, int> mapa;
    for(int i = 0; i < n; i++) {
      cin >> in;
      mapa[in]++;
    }
    for(map<int, int>::iterator it = mapa.begin(); it != mapa.end(); ++it) {
      act = it-> first + 1;
      out += ceil(double(it-> second) / act) * act;
    }
    cout << "Case " << t + 1 << ": " << out << endl;
  }
  return 0;
}
