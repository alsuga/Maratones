#include<bits/stdc++.h>

using namespace std;

int main(){
  int n,k,res,act,s=-1; cin>>n>>k;
  cout<<"1";
  act = 1;
  for(int i = 2; i <= n; i++){
    if(k){
      act -= k*s;
      k--;
      cout<<" "<<act;
      s*=-1;
    }
    else cout<<" "<<i;
  }
  cout<<endl;
  return 0;
}
