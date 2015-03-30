#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  string tmp;
  int in= 0;
  cin>>tmp;
  for(int i = 0; i < tmp.size() and tmp.size() >= 5; i++){
    if(isdigit(tmp[i])) in|=1;
    if(islower(tmp[i])) in|=2;
    if(isupper(tmp[i])) in|=4;
  }
  if(in == 7) cout<<"Correct"<<endl;
  else cout<<"Too weak"<<endl;
  return 0;
}