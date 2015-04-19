#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  vector<int> vec(100000);
  int T; cin>>T;
  while(T--){
    int n; cin>>n;
    for (int i = 0; i < n; i++)
      cin>>vec[i];
    int maxa = vec[0], maxg = vec[0];
    int mx = max(0,vec[0]),mn = vec[0];
    for (int i = 1; i < n; i++) {
      maxa = max(vec[i], maxa+vec[i]);
      maxg = max(maxa,maxg);
      mx += max(0,vec[i]);
      mn = max(mn,vec[i]);
    }
    if(mx == 0) mx = mn;
    cout<<maxg<<" "<<mx<<endl;
  }
  return 0;
}
