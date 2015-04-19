#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){__
  long long a,b,out = 0,tmp;
  cin>>a>>b;
  while(true){
    if(a % b == 0){
      out += a/b;
      break;
    }
    out++;
    if(a-b > b){
      a = a-b;
    }else{
      tmp = a-b;
      a = b;
      b = tmp;
    }
  }
  cout<<out<<endl;
  return 0;
}
