#include <bits/stdc++.h>

using namespace std;

int main() {
  string a;
  cin >> a;
  vector<bool> vec(a.size());
  int m, f, l; cin >> m;
  while(m--) {
    cin >> f;
    f--;
    l = a.size() - f;
    vec[f] = !vec[f];
    vec[l] = !vec[l];
  }
  bool act = false, flag = true;
  for(int i = 0, j = a.size() - 1; i < a.size(); i++, j--) {
    if(vec[i]){
      flag = !flag;
    }
    if(flag)
      cout << a[i];
    else
      cout << a[j];
  }
  cout << endl;
  return 0;
}
