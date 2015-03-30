#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  string s,t,out;
  cin>>s>>t;
  out = s;
  int carry = 0;
  for(int i = s.size()-1; i >= 0; i--){
    if(carry == 1){
      if(s[i] == 'z'){
        s[i] = 'a';
      } else {
        s[i] = s[i]+1;
        break;
      }
    }else{
      if(s[i] == 'z'){
        carry = 1;
        s[i] = 'a';
      } else {
        s[i] = s[i]+1;
        break;
      }
    }
  }
  if(out.compare(s) >= 0 or  t.compare(s) <= 0){
    cout << "No such string"<<endl;
  }
  else cout<<s<<endl;
  return 0;
}
