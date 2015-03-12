#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int in = 0, min = -2000000000, max = 2000000000,num;
  cin>>in;
  string tmp,ans;
  while(in--){
    cin>>tmp>>num>>ans;
    if(tmp == ">"){
      if(ans == "Y") min = (min < num+1)? num+1:min;
      else max = (max > num)?num:max;
    }
    if(tmp == "<"){
      if(ans == "Y") max =  (max > num-1)?num-1:max;
      else min = (min < num)? num:min;
    }
    if(tmp == ">="){
      if(ans == "Y" ) min = (min < num)? num:min;
      else max  = (max > num-1)?num-1:max;
    }
    if(tmp == "<="){      
      if(ans == "Y") max =  (max > num)?num:max;
      else min  = (min < num+1)? num+1:min;
    }
  }
  if(min > max) cout<<"Impossible"<<endl;
  else cout<<min<<endl;
  return 0;
}