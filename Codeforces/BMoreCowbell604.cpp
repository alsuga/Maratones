#include<bits/stdc++.h>

using namespace std;

int main() {
  int n, k; cin >> n >> k;
  vector<int> cows(n);
  for(int i = 0; i < n; i++)
    cin >> cows[i];
  if(n == k) {
    cout << cows[n - 1] << endl;
    return 0;
  }
  int out = 0;
  int actk = k, actn = n;
  for(int i = n - 1, j = 0; i >= 0; --i) {
    if(actk * 2 != actn) {
      out = max(out, cows[i]);
      actk--;
      actn--;
    } else {
      out = max(out, cows[i] + cows[j]);
      actk--;
      actn -= 2;
      j++;
    }
  }
  cout << out << endl;
  return 0;
}
