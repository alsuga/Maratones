#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

long long memo[251];

int main(){__
  int n,m;
  memset(memo,0,sizeof memo);
  memo[0] = 1;
  cin >> n >> m;
  vector<int> coins(m);
  for(int i = 0; i < m; i++)
    cin >> coins[i];
  sort(coins.begin(), coins.end());
  for(int i = 0; i < coins.size(); i++) {
    for(int j = coins[i]; j <= n; j++){
      memo[j] += memo[j-coins[i]];
    }
  }
  cout << memo[n] << endl;
  return 0;
}
