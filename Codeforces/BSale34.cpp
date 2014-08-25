#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int n,m,acum = 0;
  cin>>n>>m;
  vector<int> vec(n);
  for(int i = 0; i < n; i++) cin>>vec[i];
  sort(vec.begin(), vec.end());
  for(int i = 0; i < m; i++) 
    if(vec[i] < 0) acum += vec[i];
    else break;
  cout<<(acum*-1)<<endl;
  return 0;
}

