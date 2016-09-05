#include <bits/stdc++.h>

using namespace std;

int main() {
  string a[4];
  vector<pair<int,char> > vec(4);
  for(int i = 0; i < 4; i++) {
    cin >> a[i];
    vec[i].first = a[i].size() - 2;
    vec[i].second = 'A' + i;
  }
  sort(vec.begin(), vec.end());
  bool first = true, last = true;
  for(int i = 1; i < 4; i++) {
    if(vec[0].first * 2 > vec[i].first)
      first = false;
    if(vec[3].first < vec[3 - i].first * 2)
      last = false;
  }
  if(first and !last)
    cout << vec[0].second;
  else if(!first and last)
    cout << vec[3].second;
  else
    cout << "C";
  cout << endl;
  return 0;
}
