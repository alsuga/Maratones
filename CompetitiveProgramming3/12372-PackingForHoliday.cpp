#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  int test,x,y,z,caso = 0;
  cin>>test;
  while ( test-- ) {
    cin >> x >> y >> z;
    cout << "Case " << ++caso << ": ";
    if ( x > 20 or y > 20 or z > 20 )
      cout << "bad" << endl;
    else
      cout << "good" << endl;
  }
  return 0;
}
