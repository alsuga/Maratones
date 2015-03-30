#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){
  int test,w,x1,x2,diff;
  cin>>test;
  bool out;
  while(test--){
    cin>>w;
    out = true;
    cin>>x1>>x2;
    diff = x1-x2;
    w--;
    while(w--){
      cin>>x1>>x2;
      if(x1-x2 != diff)
        out = false;
    }
    if(out)
      cout<<"yes"<<endl;
    else
      cout<<"no"<<endl;
    if(test) cout<<endl;
  }
  return 0;
}
