using namespace std;
#include <bits/stdc++.h>

int nums[22];

int checkA(int x) {
  int ans = 0;
  if ((nums[x] == (nums[x + 1] - 1)) and (nums[x + 1] == (nums[x + 2] - 1)))
    ans = 1;
  if ((nums[x] == nums[x + 1]) and (nums[x + 1] == nums[x + 2]))
    ans =  1;
  return ans;
}

int checkB(int x) {
  return (nums[x] == nums[x + 1]);
}


int memo[20][5][3];

int dp(int i, int a, int b) {
  if (memo[i][a][b] != -1)
    return memo[i][a][b];

  if (i > 12)
    return memo[i][a][b] = ((a == 4) and (b == 1));

  int ans = 0;
  if (i <= 11)
    if (checkA(i))
      ans = dp(i + 3, a + 1,b);
  if (i <= 12)
    if (checkB(i))
      ans = ans or dp(i + 2, a, b + 1);

  return memo[i][a][b] = ans;
}

void solve() {
  for (int i = 0; i < 14; ++i)
    cin>>nums[i];

  sort(nums, nums + 14);
  memset(memo, - 1, sizeof memo);
  if (dp(0,0,0))
    cout<<"Vulnerable"<<endl;
  else
    cout<<"Immune"<<endl;
}


int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);

  int n;cin>>n;
  for (int i = 0; i < n; ++i)
    solve();
  return 0;
}