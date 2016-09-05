#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
  ll A, B, tmp;
  cin >> A >> B;
  ll act = A * A, mid, last = A * 2 - 1;
  ll minimo = LLONG_MAX;
  ll inter;
  if(B == 1) {
    minimo = act;
  } else {
    while(act) {
      mid = act / B;
      tmp = last;
      last -= 2;
      if(B == 2LL) {
        while(tmp < mid and last > 0) {
          tmp += last;
          last -= 2;
          if(tmp + last > mid)
            inter = last + 2;
        }
        act -= tmp;
        if(min(tmp, act) < min(inter, act + last)) {
          act += inter;
          tmp -= inter;
        }

        minimo = min(minimo, min(tmp, act));
        break;
      } else {
        while(tmp + last < mid and last > 0) {
          tmp += last;
          last -= 2;
        }
        minimo = min(minimo, tmp);
        act -= tmp;
        B--;
      }
    }
  }
  cout << minimo << endl;
  return 0;
}
