#include<bits/stdc++.h>

using namespace std;

int main() {
  int n, in;
  cin >> n;
  bool flag = false;
  while(n--) {
    cin >> in;
    if(in == 1)
      flag = true;
  }
  if(flag)
    cout << -1 << endl;
  else
    cout << 1 << endl;
  return 0;
}
