#include<bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> gente(n);
  for(int i = 0; i < n; i++) {
    cin >> gente[i];
  }
  vector<string> song = {"Happy", "birthday", "to", "you", "Rujia"};
  int next = 11, act;
  for(int i = 0; i % 16 != 0 or i < n; i++) {
    cout << gente[i % n] << ": ";
    if(i == next) {
      act = 4;
      next += 16;
    } else
      act = i % 4;
    cout << song[act] << endl;
  }
  return 0;
}
