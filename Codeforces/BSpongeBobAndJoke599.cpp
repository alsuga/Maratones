#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(m), b(m);
  vector<pii> f(n);
  bool can = true;
  for(int i = 0; i < n; ++i) {
    cin >> f[i].first;
    f[i].second = i + 1;
    if(i)
      if(f[i].first == f[i - 1].first)
        can = false;
  }
  for(int i = 0; i < m; ++i)
    cin >> b[i];

  sort(f.begin(), f.end());

  bool flag = false;
  int i = 0, j = 0;
  while( i < m and j < n and i >= j) {
    if(b[i] == f[j].first) {
      a[i] = f[j].second;
      flag = true;
      i++;
    } else {
      if(!flag)
        break;
      j++;
      flag = false;
    }
  }
  if(i == m) {
    if(!can)
      cout << "Ambiguity";
    else {
      cout << "Possible" << endl;
      for(int i = 0; i < m; i++)
        cout << a[i] << " ";
    }
  } else
    cout << "Impossible";
  cout << endl;
  return 0;
}
