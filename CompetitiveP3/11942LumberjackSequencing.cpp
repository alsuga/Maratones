#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){
  int n,out;
  cin>>n;
  cout<<"Lumberjacks:"<<endl;
  vector<int> vec(10);
  while(n--){
    out = 0;
    for(int i = 0; i < 10; i++)
      cin>>vec[i];
    out += is_sorted(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    out += is_sorted(vec.begin(),vec.end());
    if(out > 0) cout<<"Ordered"<<endl;
    else cout<<"Unordered"<<endl;
  }
  return 0;
}
