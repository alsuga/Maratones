#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

typedef unsigned long long ull;

int main(){__
  int in;
  cin >> in;
  vector<int> pos(in);
  ull out = 0;
  for(int i = 0; i < in; i++) {
    cin>>pos[i];
  }
  sort(pos.begin(), pos.end());
  int dis = 0;
  for(int i = 0; i < in; i++) {
    if(out > pos[i])
      dis++;
    else
      out += pos[i];
  }
  cout << pos.size() - dis << endl;
  return 0;
}
