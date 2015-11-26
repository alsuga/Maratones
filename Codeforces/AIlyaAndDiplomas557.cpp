#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){__
  int n, min1, min2, min3, max1, max2, max3;
  cin >> n;
  cin >> min1 >> max1 >> min2 >> max2 >> min3 >> max3;
  int act1 = min1, act2 = min2, act3 = min3, tmp;
  tmp = act1 + act2 + act3;
  while(tmp < n) {
    tmp = act1 + act2 + act3;
    if(act1 < max1) {
      if(max1 - act1 + tmp < n) {
        act1 = max1;
        continue;
      }
      act1 += n - tmp;
      continue;
    }

    if(act2 < max1) {
      if(max2 - act2 + tmp < n) {
        act2 = max2;
        continue;
      }
      act2 += n - tmp;
      continue;
    }

    if(act3 < max3) {
      if(max3 - act3 + tmp < n) {
        act3 = max3;
        continue;
      }
      act3 += n - tmp;
      continue;
    }
  }
  cout << act1 << " " << act2 << " " << act3 << endl;
  return 0;
}
