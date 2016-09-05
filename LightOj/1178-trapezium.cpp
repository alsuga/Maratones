#include <bits/stdc++.h>
using namespace std;

int main(){
  int test, caso = 0;
  cin >> test;
  double a, b, c, d, f, x , y , z, area1, area2, area3;
  while(test--) {
    cin >> a >> b >> c >> d;
    f = fabs(a - c);
    if(f == 0)
      y = 0;
    else
      y = ((b * b)  - (d * d) + (f * f)) / (2.0 * f);

    z = sqrt((b * b) - (y * y));
    x = sqrt((d * d) - (z * z));
    area1 = (x * z) / 2.0;
    area2 = (z * y) / 2.0;
    area3 = (z * min(c, a) );
    printf("Case %d: %.10lf\n", ++caso, area1 + area2 + area3);
  }
  return 0;
}
