#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){
  int test, in1, in2, walls, up, down, caso = 0;
  cin>>test;
  while(test--){
    cin>>walls;
    cout<<"Case "<<++caso<<": ";
    if(walls == 0){
      cout<<"0 0"<<endl;
      continue;
    }
    cin>>in1;
    up = down = 0;
    while(--walls){
      cin>>in2;
      if(in1 > in2) down++;
      if(in1 < in2) up++;
      in1 = in2;
    }
    cout<<up<<" "<<down<<endl;
  }
  return 0;
}
