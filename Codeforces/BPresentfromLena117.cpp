#include <bits/stdc++.h>

#define __   ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){ __
  int n; cin>>n;
  for(int i = 0; i < n+1;i++){
    for(int j = i; j < n;j++) {
      if(j != i) cout<<" ";
      cout<<" ";
    }
    for(int j = 0; j <= i;j++){
      if(i != n or j) cout<<" ";
     cout<<j;
   }
    for(int j = i-1; j >= 0 ;j--) cout<<" "<<j;
    cout<<endl;
  }

  for(int i = 0; i < n;i++){
    for(int j = 0; j <= i;j++) {
      cout<<"  ";
    }
    for(int j = i; j <= n-1;j++){
      if(j != i) cout<<" ";
     cout<<j-i;
   }
    for(int j = n-i-2; j >= 0 ;j--) cout<<" "<<j;
    cout<<endl;
  }
  return 0;
}