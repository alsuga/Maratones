#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int tmp,in;
  cin>>in;
  bool vec[in+1];
  memset(vec,true,sizeof(vec));
  for(int i = 0; i < in -1; i++) {
    cin>>tmp;
    vec[tmp-1] = false;
  }
  for(int i = 0; i < in; i++) 
    if(vec[i]){
      cout<<i+1<<endl;
      break;
    }
  return 0;
}