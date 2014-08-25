#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int n,i,tmp; cin>>n;
  vector<int> vec(100000);
  for(i = 0; i < n; i++){
    cin>>vec[i]; 
  }

  for(i = 0; i < n-1; i++){
    if(vec[i+1] < vec[i]) break;
  }
  if(i == n-1){
    cout<<"0"<<endl;
    return 0;
  }
  i++;
  tmp = i;
  for( ; i < n-1; i++){
    if(vec[i] > vec[i+1]) break;
  }
  if(i == n-1 and vec[n-1] <= vec[0]){
    cout<<(n - tmp)<<endl;
  }else cout<<"-1"<<endl;
  return 0;
}