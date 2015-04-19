#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){
  int in; cin>> in;
  if(in == 0 or in == 1)
    cout<<in<<endl;
  else {
    int a = 0, b = 1, tmp;
    for(int i = 1; i < in; i++){
      tmp = b;
      b += a;
      a = tmp;
    }
    cout<<b<<endl;
  }
  return 0;
}
