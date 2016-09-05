#include <bits/stdc++.h>

using namespace std;

string try_letter(string &a, int pos, char c) {
  string b = a;
  b.insert(b.begin() + pos, c);
  return b;
}

bool is_pal(string &a) {
  for(int i = 0, j = a.size() - 1; i <= j; i++, j--)
    if(a[i] != a[j])
      return false;
  return true;
}

int main() {
  string in, out;
  cin >> in;
  bool flag = true;
  for(int i = 0; i <= in.size() and flag; i++) {
    for(int j = 0; j < in.size() and flag; j++) {
      out = try_letter(in, i, in[j]);
      if(is_pal(out))
        flag = false;
    }
  }
  if(flag) cout << "NA" << endl;
  else cout << out << endl;
  return 0;
}

