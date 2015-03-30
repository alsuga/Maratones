#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  int n,m,k,tmp; cin>>n>>m>>k;
  map<int,int> val,inval;
  for(int i = 0; i < n; i++){
    cin>>tmp;
    tmp--;
    val[tmp] = i-tmp;
    inval[i] = tmp;
  }
  long long out = 0,tmpp;
  for(int i = 0; i < m; i++){
    cin>>tmp;
    tmp--;
    out += ((val[tmp]+tmp)/k) +1 ;
    tmpp = val[tmp] + tmp;
    if(tmpp > 0){
      val[tmp]--;
      val[inval[tmpp-1]]++;
      tmp = inval[tmpp];
      inval[tmpp] = inval[tmpp-1];
      inval[tmpp-1] = tmp;
    }
  }
  cout<<out<<endl;
  return 0;
}
