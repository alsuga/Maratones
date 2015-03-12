#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int in;
  cin>>in;
  vector<pair <string,string> > name(in);
  vector<int> nums(in);
  for(int i = 0; i < in; i++){
    cin>>name[i].first>>name[i].second;
  }
  for(int i = 0; i < in; i++){
    cin>>nums[i];
    nums[i]--;
  }
  bool flag = true;
  string tmp, act = min(name[nums[0]].first,name[nums[0]].second);
  for(int i = 1; i < in and flag; i++){
    int t1 = act.compare(name[nums[i]].first), t2 = act.compare(name[nums[i]].second) ;
    if( t1 < 0) tmp = name[nums[i]].first;
    if( t2 < 0) tmp = name[nums[i]].second;
    if( t1 + t2 < 0) tmp = min(name[nums[i]].first, name[nums[i]].second);
    if( t1 > 0 and t2 > 0 )   flag = false;
    act = tmp;
  }
  if(flag) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  return 0;
}