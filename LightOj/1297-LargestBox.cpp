#include <bits/stdc++.h>

using namespace std;

double resolve(double L, double W) {
  double a = 12.0;
  double b = 4.0 * (L + W);
  double c = L * W;
  double sq = sqrt( (b * b) - (4.0 * a * c));
  double t1 = (b - sq) / (2.0 * a);
  double t2 = (b + sq) / (2.0 * a);
  double mn = t1 * (L - (2.0 * t1)) * (W - (2.0 * t1));
  mn = max(mn, (t2 * (L - (2.0 * t2)) * (W - (2.0 * t2))));
  return mn;
}

int main(){
  int test; cin >> test;
  double L, W;
  double area;
  for(int caso = 1; caso <= test; caso++) {
    cin >> L >> W;
    area = resolve(L, W);
    printf("Case %d: %.8lf\n", caso, area);
  }
  return 0;
}
