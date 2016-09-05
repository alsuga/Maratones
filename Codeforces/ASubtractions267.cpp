#include <bits/stdc++.h>

using namespace std;

int main() {
  int in;
  long long a , b;
  long long acum = 0;
  cin >> in;
  while(in--) {
    cin >> a >> b;
    acum = 0;
    if(a == b)
      acum = 1;
    while(a != b and b != 0 and a != 0) {
      if( a > b )
        swap(a, b);
      acum += b / a;
      b = b % a;
    }
    cout << acum << endl;
  }
  return 0;
}
