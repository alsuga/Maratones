#include<bits/stdc++.h>

using namespace std;

int main() {
  int n, m; cin >> n >> m;
  int out = 0;
  while(n--) {
    int tmp = 0, in;
    for(int i = 0; i < m; i++) {
      cin >> in; tmp += in;
      cin >> in; tmp += in;
      if(tmp)
        out++;
      tmp = 0;
    }
  }
  cout << out << endl;
  return 0;
}
