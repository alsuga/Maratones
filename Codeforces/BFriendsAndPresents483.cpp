#include <bits/stdc++.h>

using namespace std;

int main(){
  int c1,c2,x,y,out; cin>>c1>>c2>>x>>y;
  if(c1 < c2){
    swap(c1,c2);
    swap(x,y);
  }
  out = c1+c2;
  if(c1+c2 > x*y) out += (c1+c2)/(x*y);
  cout<<out<<endl;
  return 0;
}
