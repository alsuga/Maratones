#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int two(string a){
  string b = "two";
  int acum = 0;
  for(int i = 0; i < a.size(); i++)
    if(a[i] == b[i]) acum++;
  return acum;
}

int main(){__
  int test;
  string a;
  cin >> test;
  while ( test-- ) {
    cin >> a;
    if(a.size() > 3) {
      cout << 3 << endl;
      continue;
    }
    if(two(a) > 1 ) cout << 2 << endl;
    else cout << 1 << endl;
  }
  return 0;
}
