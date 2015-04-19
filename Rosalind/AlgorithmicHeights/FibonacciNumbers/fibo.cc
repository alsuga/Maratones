#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){__
  freopen("fibo.in", "r", stdin);
  freopen("fibo.out", "w", stdout);
  int in;
  long long a[26];
  a[0] = 0;
  a[1] = 1;
  for(int i = 2; i <= 25; i++){
    a[i] = a[i-1] + a[i-2];
  }
  cin>> in;
  cout<<a[in]<<endl;
  return 0;
}
