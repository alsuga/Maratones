#include <bits/stdc++.h>

#define __   ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){ __
  int n,a,b; cin>>n;
  if(n>=0) cout<<n<<endl;
  else if(n/10 == 0) cout<<0<<endl;
    else{
      a = n/10;
      b = ((n/100)*10) + (n%10);
      if(a > b) cout<<a<<endl;
      else cout<<b<<endl;
    }
  return 0;
}