#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){__
  string a,b,c;
  while(cin>> a >> b) {
    int dist = 0,tmp;
    c = a;
    for(int i = 0; i < a.size(); i++) {
      if(a[i] != b[i]){
        dist++;
        if(dist % 2)
          c[i] = b[i];
      }
    }

    if(dist % 2 != 0) {
      cout << "impossible" <<endl;
      break;
    }
    cout << c << endl;
  }
  return 0;
}
