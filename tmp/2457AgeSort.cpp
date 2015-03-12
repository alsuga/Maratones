#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int in,tmp;
  int vec[100];
  memset(vec,0,sizeof (vec));
  while(cin>>in and in){
    for(int i = 0; i < in; i++) {
      cin>>tmp;
      vec[tmp]++;
    }
    bool flag = false;
    for(int i = 0; i < 100; i++){
      while(vec[i]--) {
        if(flag) cout<<" ";
        else flag = true;
        cout<<i;
      }
    }
    cout<<endl;
  }
  return 0;
}
