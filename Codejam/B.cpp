#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

map<pair<char,char>,char> mp;
map<char,char> m;

char op(char i, char j) {
  if(i == '1')
    return j;
  if(j == '1')
    return i;
  if(i == j)
    if(i > 'k')
      return '1';
    else
      return 'o';
  if(i > 'k' and j > 'k')
    return mp[make_pair(m[i], m[j])];
  if(i > 'k' or j > 'k')
    if(i > 'k')
      if(m[i] == '1')
        return m[j];
      else
        return m[mp[make_pair(m[i],j)]];
    else
      if(m[j] == 'o')
        return m[i];
      else
        return m[mp[make_pair(i,m[j])]];
  return mp[make_pair(i,j)];
}

bool foo(string &st, int wh, int act) {
  cout<<"1 "<<act<<" "<<wh<<" "<<st.size()<<endl;
  if(act == 3 and wh == st.size()) return true;
  char a = (act == 0)? 'i' : (act == 1)? 'j' : 'k';
  bool out = false;
  char cc = st[wh];
  for(int i = wh; i < st.size(); i++) {
    if(cc == a) {
      out = out or foo(st, i + 1, act + 1);
    }
    cc = op(cc,st[i]);
  }
  cout<<act<<wh<<endl;
  return out;
}

int main(){__
  mp[make_pair('i','j')] = 'k';
  mp[make_pair('i','k')] = 'l';
  mp[make_pair('j','i')] = 'm';
  mp[make_pair('j','k')] = 'i';
  mp[make_pair('k','i')] = 'j';
  mp[make_pair('k','j')] = 'n';
  mp[make_pair('i','i')] = 'o';
  mp[make_pair('j','j')] = 'o';
  mp[make_pair('k','k')] = 'o';

  m['i'] = 'l';
  m['j'] = 'm';
  m['k'] = 'n';
  m['l'] = 'i';
  m['m'] = 'j';
  m['n'] = 'k';
  m['1'] = 'o';
  m['o'] = '1';

  int t,l,x;
  string st, act;
  cin>>t;
  for(int i = 0; i < t; i++) {
    st = "";
    cin>>l>>x>>act;
    while(x--)
      st += act;
    cout<<st<<endl;
    bool out = foo(st, 0, 0);
    cout<<"Case #"<<i+1<<": "<<((out)? "YES" : "NO")<<endl;
  }
  return 0;
}
