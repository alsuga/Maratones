#include<bits/stdc++.h>

using namespace std;

map<char, int> eq;
map<int, char> rev;

bool check(string num, int base) {
  if(base == 1) {
    for(int i = 0; i < num.size(); ++i)
      if(num[i] != '1')
        return false;
    return true;
  } else {
    for(int i = 0; i < num.size(); ++i)
      if(eq[num[i]] >= base)
        return false;
    return true;
  }
}

long long tobase(string num, int base) {
  if(base == 1)
    return num.size();
  else {
    long long out = 0, act = 1;
    for(int i = num.size() - 1; i >= 0; --i) {
      out += act * eq[num[i]];
      act *= base;
    }
    return out;
  }
}

int main() {
  int in = 0;
  for(char a = '0'; a <= '9'; ++a) {
    eq[a] = in;
    rev[in++] = a;
  }
  for(char a = 'a'; a <= 'z'; ++a) {
    eq[a] = in;
    rev[in++] = a;
  }
  rev[36] = '0';
  cin >> in;
  string a, op, b, c, out;
  long long op1, op2, res;
  while(in--) {
    cin >> a >> op >> b >> out >> c;
    out = "";
    for(int i = 1; i < 37; ++i) {
      if(check(a, i) and check(b, i) and check(c, i)) {
        op1 = tobase(a, i);
        op2 = tobase(b, i);
        res = tobase(c, i);
        if(op == "+" and op1 + op2 == res)
          out += rev[i];
        if(op == "-" and op1 - op2 == res)
          out += rev[i];
        if(op == "*" and op1 * op2 == res)
          out += rev[i];
        if(op == "/")
          if(op1 / op2 == res and op1 % op2 == 0) {
            out += rev[i];
          }
      }
    }
    if(out.size() == 0)
      cout << "invalid\n";
    else
      cout << out << endl;
  }
  return 0;
}
