#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){
  long long s,t,tmp;
  while(cin >> s and s) {
    t = sqrt(s << 2);
    tmp = ((t*(t+1)) >> 1);
    if(tmp == s)
      cout << s + 1 << " " << s + 1 <<endl;
    cout << t << " " << ((t*(t+1)) / 2) <<endl;
  }
  return 0;
}
