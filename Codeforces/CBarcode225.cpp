#include<bits/stdc++.h>

using namespace std;
typedef vector<int> vi;

int n, m, x, y;
int inf = 1000000000;
int dp[3][1001][1001];

int solve(vi &acts, int act,int last, int carry) {
  if(act >= acts.size())
    if(carry < x)
      return inf;
    else
      return 0;
  if(dp[last][carry][act] != -1)
    return dp[last][carry][act];
  int cost[2] = {0 , 0};
  cost[0] = n - acts[act];
  cost[1] = acts[act];
  int out = 0;
  int bar = last;
  if(carry == y) {
    last = 1 - last;
    carry = 1;
    out = solve(acts, act + 1, 1 - last, 1) + cost[1 - last];
  } else if(carry < x)
    out = solve(acts, act + 1, last, carry + 1) + cost[last];
  else {
    int a = solve(acts, act + 1, 1 - last, 1) + cost[1 - last];
    int b = solve(acts, act + 1, last, carry + 1) + cost[last];
    out = min(a, b);
    if(a < b) {
      last = 1 - last;
      carry = 1;
    }
  }
  dp[last][carry][act] = out;
  return out;
}


int main() {
  cin >> n >> m >> x >> y;
  vector<int> acts(m, 0);
  string tmp;
  for(int i = 0; i < n; i++) {
    cin >> tmp;
    for(int j = 0; j < tmp.size(); j++)
      if(tmp[j] == '#')
        acts[j]++;
  }
  int out = 0, a, b;
  memset(dp, -1, sizeof dp);
  a = solve(acts, 1, 0, 1) + (n - acts[0]);
  b = solve(acts, 1, 1, 1) + (acts[0]);
  out = min( a, b);
  cout << out << endl;
  return 0;
}
