#include<bits/stdc++.h>

using namespace std;

int main() {
  int test; cin >> test;
  int n, mo, ju, call, tmp;
  for(int i = 0; i < test; i++) {
    cin >> n;
    mo = ju = 0;
    while(n--) {
      cin >> call;
      tmp = ceil(call / 30.0);
      if(call % 30 == 0) tmp++;
      mo += tmp * 10;
      tmp = ceil(call / 60.0);
      if(call % 60 == 0) tmp++;
      ju += tmp * 15;
    }
    cout << "Case " << i + 1 << ": ";
    if(ju >= mo)
      cout << "Mile ";
    if(mo >= ju)
      cout << "Juice ";
    cout << min(mo, ju) << endl;
  }
  return 0;
}
