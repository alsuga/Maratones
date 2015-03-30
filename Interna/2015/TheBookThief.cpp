#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false); cin.tie(NULL);

int main(){
  int in;
  long long t,a;
  while(cin>>in and in > 0){
    a = sqrt(in*2);
    if(a%2)
      t = (a/2) * (a+1);
    else
      t = a * ((a+1)/2);
    if(t == in)
      cout<<t+1<<" "<<t+1<<endl;
    else{
      a++;
      if(a%2)
        t = (a/2) * (a+1);
      else
        t = a * ((a+1)/2);
      cout<<t-in<<" "<<a<<endl;
    }
  }
  return 0;
}
