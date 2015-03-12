#include <bits/stdc++.h>

using namespace std;

long long memo[5001][5001];
long long vec[5001];
int n,m,k; 

long long dp(int li, int k){
  if(k == 0 or li+m > n) return 0;
  if(memo[li][k] >= 0) return memo[li][k];
  long long tmp = dp(li+1,k);
  tmp = max(tmp, vec[li+m]-vec[li-1] + dp(li+m+1,k-1));
  memo[li][k] = tmp;
  return tmp;
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  memset(memo,-1,sizeof(memo));
  cin>>n>>m>>k; m--;
  vec[0] = 0; 
  for(int i = 1; i <= n; i++) {
    cin>>vec[i];
    vec[i] += vec[i-1];
  }
  cout<<dp(1,k)<<endl; 
  return 0;
}
