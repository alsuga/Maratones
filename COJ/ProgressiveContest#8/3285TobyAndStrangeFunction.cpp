#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){
  long long in, test, tmp;
  string st;
  cin>>test;
  while(test--) {
    cin >> in >> st;
    in = in % st.size();
    tmp = st.size() - in;
    for(int i = 0; i < st.size(); i++) {
      cout << st[(i + tmp) % st.size()];
    }
    cout<<endl;
  }
  return 0;
}
