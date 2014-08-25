#include<bits/stdc++.h>

using namespace std;

int main(){
  int T,n,k,a;
  cin>>T;
  while(T--){
    cin>>n>>k;
    while(n--){
      cin>>a;
      if(a%2 == 0) k--;
    }
    if(k%2 == 0) puts("YES");
    else puts("NO");
  }

  return 0;
}
