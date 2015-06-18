#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int dig(long long a){
  int out = 0;
  while( a ){
    out += a % 10;
    out = (out % 10) + (out / 10);
    a /= 10;
  }
  return out;
}

int main(){
  long long a;
  while(cin>>a and a > 0){
    cout << dig(a) <<endl;
  }
  return 0;
}
