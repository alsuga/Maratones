#include <bits/stdc++.h>

using namespace std;

long memo[31][3];

long dp(long n, long st){
  long out;
  if(n == 0 and st == 0) return 1;
  if(n < 1) return 0;
  if(memo[n][st] != -1) return memo[n][st];
  if(st == 0) out = dp(n-2,0) + 2*dp(n-1, 1);
  if(st == 1) out = dp(n-1,0) + dp(n-1,2);
  if(st == 2) out = dp(n-1,1);
  memo[n][st] = out;
  return out;
}

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  long in;
  memset(memo,-1,sizeof memo);
  memo[0][0] = 1;
  dp(30,0);
  while(cin>>in and in >= 0){
    if(in %2 == 0) cout<<memo[in][0]<<endl;
    else cout<<0<<endl;
  }
  return 0;
}