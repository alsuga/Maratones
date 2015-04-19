#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){__
  int in; cin>>in;
  string st; cin>>st;
  map<int,int> ps;
  int cont = 0;
  for(int i = 0; i < st.size(); i+=2){
    ps[st[i]-'a']++;
    if(ps[st[i+1] - 'A'] > 0){
      ps[st[i+1] - 'A']--;
    } else {
      cont++;
    }
  }
  cout<<cont<<endl;
  return 0;
}
