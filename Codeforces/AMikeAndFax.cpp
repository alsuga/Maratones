#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

bool ispal(string &s, int init, int end){
  if(end >= s.size())
    return false;
  while(init <= end) {
    if(s[init] != s[end])
      return false;
    init++;
    end--;
  }
  return true;
}

int main(){__
  string s;
  int n;
  while(cin >> s >> n) {
    int sz = s.size() / n;
    bool flag = true;
    if(s.size() % n != 0)
      flag = false;
    for(int i = 0; i < n and flag; i++) {
      if(!ispal(s, i * sz, (i + 1) * sz - 1))
        flag = false;
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}
