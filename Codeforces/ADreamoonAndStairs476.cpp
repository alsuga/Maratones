#include <bits/stdc++.h>
using namespace std;
#define ___ ios_base::sync_with_stdio(0);cin.tie(NULL);
#define endl '\n'

int main(){___
  int n,m,out;cin>>n>>m;
  if(m > n) cout<<"-1"<<endl;
  else{
    out = n/2;
    if(n%2 != 0) out++;
    while(out % m != 0) out++;
    cout<<out<<endl;
  }
  return 0;
}
