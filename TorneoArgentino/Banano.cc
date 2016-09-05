#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll cerc(ll act, ll t1, ll t2) {
  if(abs(t1 * t1 - act) - abs(t2 * t2 - act) >= 0)
    return t2;
  return t1;
}

int main() {
  ll A, B, tmp;
  cin >> A >> B;
  tmp = A * A;
  ll act = ceil(tmp / (double)B);
  ll minimo = LLONG_MAX, acum = 0, t1, t2, o1;

  for(ll i = 0; i < B - 1; i++) {
    t1 = sqrt(acum + act);
    t2 = ceil(sqrt(acum + act));
    o1 = cerc(act + acum, t1, t2);
    minimo = min(minimo, o1*o1 - acum);
    acum = o1 * o1;
  }
  minimo = min(minimo, tmp - acum);
  act = (tmp / (double)B);
  acum=0;
  ll minimo2=LLONG_MAX;
  for(ll i = 0; i < B - 1; i++) {
    t1 = sqrt(acum + act);
    t2 = ceil(sqrt(acum + act));
    o1 = cerc(act + acum, t1, t2);
    minimo2 = min(minimo2, o1*o1 - acum);
    acum = o1 * o1;
  }
  minimo2=min(minimo2,tmp-acum);
  cout << max(minimo,minimo2) << endl;
  return 0;
}
