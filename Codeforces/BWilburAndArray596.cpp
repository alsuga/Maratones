#include <bits/stdc++.h>

using namespace std;

int main() {
  int size;
  cin >> size;
  vector<long long> vec(size);
  for(int i = 0; i < size; i++) {
    cin >> vec[i];
  }
  long long op = 0, act = 0;
  for(int i = 0; i < size; i++) {
    op += abs(act - vec[i]);
    act = vec[i];
  }
  cout << op << endl;
  return 0;
}
