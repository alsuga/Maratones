#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  int n,l; cin>>n>>l;
  vector<int> pos(n);
  for(int i = 0; i < n; i++) cin>>pos[i];
  int maxdis = 0;
  sort(pos.begin(), pos.end());
  for(int i = 1; i < n; i++){
    maxdis = max(maxdis,pos[i]-pos[i-1]);
  }
  double d = maxdis/2.000;
  cout.setf( std::ios::fixed, std:: ios::floatfield );
  cout.precision(10);
  if(d < pos[0]) d = pos[0];
  if(d < l-pos[pos.size()-1]) d = l-pos[pos.size()-1];
  cout<<d<<endl;
  return 0;
}
