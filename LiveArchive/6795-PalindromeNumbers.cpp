#include <bits/stdc++.h>

using namespace std;

int main(){
  int caso; cin>>caso;
  while(caso--){
    string a; cin>>a;
    int b = (a.size()-1)/2;
    bool flag = false;
    for(int i = b; i >= 0; i--){
      if(a[i] > a[a.size()-1-i]){
        flag = false;
        break;
      }
      if(a[i] < a[a.size()-1-i]){
        flag = true;
        break;
      }
    }
    for(int i = b; i >= 0 ; i--){
      if(flag){
        if(a[i] == '9') a[i] = '0';
        else{
          a[i] = a[i]+1;
          flag = false;
        }
      }
      a[a.size()-1 - i] = a[i];
    }
    cout<<a<<endl;
  }
  return 0;
}
