#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){__
  int ham, sz = 'z'-'a'+1, p1=-1,p2=-1,hh = 0;
  string s,t;
  cin>>ham;
  ham = 0;
  cin>>s>>t;
  vector<vector<int> > diff1(sz), diff2(sz);
  for(int i = 0; i < s.size(); i++){
    if(s[i] != t[i]){
      ham++;
      diff1[s[i]-'a'].push_back(i+1);
      diff2[t[i]-'a'].push_back(i+1);
    }
  }
  for(int i = 0; i < sz; i++){
    for(int j = 0; j < diff1[i].size(); j++){
      for(int k = 0; k < diff2[i].size(); k++){
        if(diff1[i][j] > 0 and diff2[i][k] > 0) {
          if(s[diff2[i][k]-1] == t[diff1[i][j]-1]){ 
            cout<<ham-2<<endl<<diff2[i][k]<<" "<<diff1[i][j]<<endl;
            return 0;
          }
          hh = -1;
          p1 = diff2[i][k];
          p2 = diff1[i][j];
        }
      }
    }
  }
  cout<<ham+hh<<endl<<p1<<" "<<p2<<endl;
  return 0;
}
