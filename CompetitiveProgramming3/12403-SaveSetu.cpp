#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  int test, tmp,acum = 0; cin >> test;
  string a;
 while (test--) {
    cin>>a;
    if(a == "report") cout<<acum<<endl;
    else{
      cin>>tmp;
      acum+= tmp;
    }
  }
  return 0;
}
