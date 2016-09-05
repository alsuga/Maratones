#include<bits/stdc++.h>

using namespace std;

int main() {
  int in, num, a ,b;
  string st;
  bool flag = false;
  while(cin >> in) {
    if(flag)
      cout << endl;
    else
      flag = true;
    unordered_map<string, int> mapa;
    vector<string> vec(in);
    for(int i = 0; i < in; ++i) {
      cin >> vec[i];
    }
    for(int i = 0; i < in; ++i) {
      cin >> st;
      cin >> a >> b;
      mapa[st] -= a - (b == 0? a : a % b);
      if(b == 0) continue;
      num = a / b;
      while(b--) {
        cin >> st;
        mapa[st] += num;
      }
    }
    for(int i = 0; i < vec.size(); i++) {
      cout << vec[i] << " " << mapa[vec[i]] << endl;
    }

  }
  return 0;
}
