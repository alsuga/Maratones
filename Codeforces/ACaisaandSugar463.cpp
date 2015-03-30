#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int s,n,cent = -1,tmp1,tmp2;
  cin>>n>>s;
  for(int i = 0; i < n ; i++) {
    cin>>tmp1>>tmp2;
    if(tmp1 < s) cent = max(cent,((tmp2 > 0) ? (100-tmp2):0));
    if(tmp1 == s and tmp2 == 0) cent = max(cent, 0);
  }
  cout<<cent<<endl;
  return 0;
}