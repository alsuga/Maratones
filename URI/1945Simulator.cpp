#include <bits/stdc++.h>

using namespace std;

typedef map<string, int> msi;

int convert(string &in) {
  istringstream cad(in);
  int out;
  cad >> out;
  return out;
}

string parser(string &in, msi &value) {
  istringstream cad(in);
  string f, ba, d1, d2;
  int t1, t2;
  cad >> f >> ba >> d1;
  if(isdigit(d1[0]))
    t1 = convert(d1);
  else
    t1 = value[d1];

  if(cad >> ba) {
    cad >> d2;
    if(isdigit(d2[0]))
      t2 = convert(d2);
    else
      t2 = value[d2];

    value[f] = t1 + t2;
  } else {
    value[f] = t1;
  }
  return f;
}

int main() {
  string in, act;
  msi value;
  while(getline(cin, in)) {
    act = parser(in, value);
  }
  cout << value[act] << endl;
  return 0;
}
