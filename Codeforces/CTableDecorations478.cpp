#include <bits/stdc++.h>
using namespace std;
#define ___ ios_base::sync_with_stdio(0);cin.tie(NULL);
#define endl '\n'

int main(){
  int r,g,b,d,out = 0,tmp;
  vector<int> vec(3);
  cin>>vec[0]>>vec[1]>>vec[2];
  sort(vec.begin(), vec.end());
  while(vec[1] != 0 or vec[0] != 0) {
    if(vec[0]+vec[1] == vec[2] + vec[1]) break;
    if(vec[0] == 0) swap(vec[0],vec[1]);
    tmp = vec[2] - vec[0]; 
    if(vec[0] - tmp < 0) tmp = vec[0];
    if(tmp == 0) tmp = 1;
    out += tmp;
    vec[2] -= 2*tmp;
    vec[0] -= tmp;
    sort(vec.begin(), vec.end());
  }
  out += vec[0];
  cout<<out<<endl;
  return 0;
}