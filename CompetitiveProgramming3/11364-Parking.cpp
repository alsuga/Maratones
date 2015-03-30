#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  int test,num,mn,mx,tmp;
  cin >> test;
  while (test--) {
    cin >> num;
    mn = 200;
    mx = -1;
    while (num--) {
      cin>>tmp;
      if (tmp > mx) mx = tmp;
      if (tmp < mn) mn = tmp;
    }
    cout << 2*(mx-mn) << endl;
  }
  return 0;
}
