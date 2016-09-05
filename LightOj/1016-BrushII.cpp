#include<bits/stdc++.h>

using namespace std;

int main() {
  int test; cin >> test;
  for(int caso = 1; caso <= test; caso++) {
    int N, w; cin >> N >> w;
    vector<int> dust(N);
    for(int i = 0; i < N; i++)
      cin >> dust[i] >> dust[i];
    sort(dust.begin(), dust.end());
    int out = 1, act = dust[0];
    for(int i = 0; i < N; i++) {
      if(act + w - dust[i] < 0) {
        act = dust[i];
        out++;
      }
    }
    cout << "Case " << caso << ": " << out << endl;
  }
  return 0;
}
