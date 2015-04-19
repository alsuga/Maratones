#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  int a,b,c,out; cin>>a>>b>>c;
  out = abs(a) + abs(b);
  if(out == c or (out%2 == c%2 and out < c)) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}
