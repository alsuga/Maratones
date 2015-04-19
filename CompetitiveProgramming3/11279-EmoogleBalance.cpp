#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  int test,caso = 0,tmp,acum;
  while(cin >> test and test > 0){
    acum = 0;
    while(test--){
      cin >> tmp;
      if(tmp > 0) acum++;
      else acum--;
    }
    cout<<"Case "<<++caso<<": "<<acum<<endl;
  }
  return 0;
}
