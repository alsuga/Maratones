#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int insertion_sort(vi &vec) {
  int sw = 0, k;
  for(int i = 1; i < vec.size(); i++) {
    k = i;
    while(k > 0 and vec[k] < vec[k - 1]) {
      swap(vec[k], vec[k - 1]);
      k--;
      sw++;
    }
  }
  return sw;
}

int main() {
  int n; cin >> n;
  vi vec(n);
  for(int i = 0; i < n; i++)
    cin >> vec[i];
  cout << insertion_sort(vec) << endl;
  return 0;
}
