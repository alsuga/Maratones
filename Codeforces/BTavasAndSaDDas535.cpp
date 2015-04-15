#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){__
  string in; cin>>in;
  int out = 1;
  for(int i = 1; i < in.size(); i++)
    out += 1<<i;
  for(int i = 0; i < in.size(); i++) {
    if(in[i] == '7')
      out += 1<<(in.size()-1-i);
  }
  cout<<out<<endl;
  return 0;
}
