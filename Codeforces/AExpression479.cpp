#include <bits/stdc++.h>
using namespace std;
#define ___ ios_base::sync_with_stdio(0);cin.tie(NULL);
#define endl '\n'

int main(){___
  int a,b,c,out = 0;
  cin>>a>>b>>c;
  out = (a+b)*c;
  out = max(out,a*(b+c));
  out = max(out,a*b*c);
  out = max(out, a+b+c);
  cout<<out<<endl;
  return 0;
}