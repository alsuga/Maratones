#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){__
  string in;
  int m, tmp, sz;
  cin>>in>>m;
  sz = in.size();
  vector<int> vec(sz/2,0);
  for(int i = 0; i < m; i++){
    cin>>tmp;
    vec[tmp-1] = (vec[tmp-1]+1)%2;
  }
  bool flag = false;
  for(int i = 0; i < vec.size(); i++){
    //tmp = flag;
    flag ^= vec[i];
    //vec[i] = (vec[i] + flag) % 2;
    if(flag){
      swap(in[i], in[sz - i-1]);
      //flag != flag;
    }
  }
  //  reverse(in.begin()+tmp-1, in.begin()+ sz - tmp+1);
  cout<<in<<endl;
  return 0;
}
