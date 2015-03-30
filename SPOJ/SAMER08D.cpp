#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int c[1002][1002],in;
  string a,b;
  while(cin>>in and in){
    cin>>a>>b;
    for(int i = 0; i < a.size(); i++) c[i][0]  = c[0][i]= 0;
    int ma = 0;
    for(int i = 1; i <= a.size(); i++){
      for(int j = 1; j <= b.size(); j++){
        c[i][j] = max(c[i][j-1],c[i-1][j]);
        if(a[i-1] == b[j-1]) c[i][j] = c[i-1][j-1] +1;
      }
    }
    for(int i = 0; i <= a.size(); i++){
      for(int j = 0; j <= b.size(); j++){
        cout<<c[i][j]<<" ";
      }
      cout<<endl;
    }
  }
  
  return 0;
}