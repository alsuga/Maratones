#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int st,a,b,c,total;
  while(cin>>st>>a>>b>>c and (st||a||b||c)){
    total = 120;
    //total += ((a+40)-st)%40;
    total += ((st+40)-a)%40;
    st = a;
    //total += ((st+40)-b)%40;
    total += ((b+40)-st)%40;
    st = b;
    //total += ((c+40)-st)%40;
    total += ((st+40)-c)%40;
    cout<<total*9<<endl;
  }
  return 0;
}

