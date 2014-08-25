#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int main(){
  int n,m; cin>>n>>m;
  double acum = 0, res = 1/ (double)pow(n,m);
  for(int i = 0; i < n; i++)
    acum += ((2*i - 1)*m*i) * res;
  cout<<acum<<endl;
  return 0;
}