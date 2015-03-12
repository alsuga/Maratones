#include <bits/stdc++.h>

using namespace std;

bool cmp(int i , int j){
  return (i > j);
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n,k,sz; cin>>n>>k;
  vector<int> vec(n);
  for (int i = 0; i < n; ++i)  
      cin>>vec[i];
  sort(vec.begin(), vec.end(),cmp);
  int a = 0,tmp = k,acum= 0;
  for(int i = 0;i < vec.size(); i+= k){
    acum += 2*(vec[i] -1);
  }
  cout<<acum<<endl;
  return 0;
}