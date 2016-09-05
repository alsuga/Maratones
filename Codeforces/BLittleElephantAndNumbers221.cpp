#include<bits/stdc++.h>

using namespace std;

int check_digit(int in, int in2) {
  stringstream st1, st2;
  st1 << in;
  string a1, a2;
  st1 >> a1;
  st2 << in2;
  st2 >> a2;
  for(int i = 0; i < a1.size(); i++) {
    for(int j = 0; j < a2.size(); j++) {
      if(a1[i] == a2[j])
        return 1;
    }
  }
  return 0;
}

int main() {
  int in, out = 0;
  cin >> in;
  for(int i = 1; i * i <= in; i++) {
    if(in % i == 0) {
      out += check_digit(in, i);
      if(i * i != in)
      out += check_digit(in, in / i);
    }
  }
  cout << out << endl;
  return 0;
}
