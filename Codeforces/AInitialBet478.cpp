#include <bits/stdc++.h>
using namespace std;
#define ___ ios_base::sync_with_stdio(0);cin.tie(NULL);
#define endl '\n'

int main(){
  int in,out=0;
  for(int i = 0; i < 5; i++){
    cin>>in;
    out += in;
  }
  if(out %  5 == 0 and out > 0) cout<<out/5<<endl;
  else cout<<-1<<endl;
  return 0;
}