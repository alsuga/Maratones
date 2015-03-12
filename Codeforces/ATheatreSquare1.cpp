#include <bits/stdc++.h>
using namespace std;
int main(){
  unsigned long long m,n,a, out;
  cin>>m>>n>>a;
  out = ((m+a-1)/a) * ((n+a-1)/a);
  cout<<out<<endl;
  return 0;
}
