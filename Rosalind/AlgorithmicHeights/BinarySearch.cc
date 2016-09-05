#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int binary_search(vi &vec, int num) {
  int r = 0, l = vec.size() - 1;
  int mid;
  while(r <= l) {
    mid = r + (l - r) / 2;
    if(num == vec[mid])
      return mid + 1;
    if(vec[mid] < num) {
      r = mid + 1;
    }
    if(vec[mid] > num) {
      l = mid - 1;
    }
  }
  return -1;
}

int main() {
  int n, m; cin >> n >> m;
  vi vec(n);
  for(int i = 0; i < n; i++)
    cin >> vec[i];
  int tmp;
  while(m--) {
    cin >> tmp;
    cout << binary_search(vec, tmp);
    if(m)
      cout << " ";
  }
  cout << endl;
  return 0;
}
