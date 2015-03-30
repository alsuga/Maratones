#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  int n,tmp; cin>>n;
  vector<int> vec(n);
  for(int i = 0; i < n; i++){
    cin>>vec[i];
  }
  tmp = vec[n-1];
  bool flag = true;
  for(int i = n-1; i >= 0 and flag; --i){
    if(i) vec[i] = vec[i-1];
    else vec[i] = tmp;
    if(vec[i] < tmp){
      vec[i] = tmp;
      flag = false;
    }
    for(int k = 0; k < n; k++){
      if(k) cout<<" ";
      cout<<vec[k];
    }
    cout<<endl;
  }
  return 0;
}
