#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  int test,n,m,x,y;
  while(cin>>test and test > 0){
    cin>>n>>m;
    while(test--){
      cin>>x>>y;
      if (x > n and y > m) cout<<"NE";
      if (x < n and y > m) cout<<"NO";
      if (x > n and y < m) cout<<"SE";
      if (x < n and y < m) cout<<"SO";
      if (x == n or y == m) cout<<"divisa";
      cout<<endl;
    }
  }
  return 0;
}
