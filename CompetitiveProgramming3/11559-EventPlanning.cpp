#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){__
  int N, B, H, W, mn, P, F;
  while( cin >> N >> B >> H >> W ) {
    mn = B + 1;
    for(int i = 0; i < H ; i++) {
      cin >> P;
      for(int j = 0; j < W; j++) {
        cin >> F;
        if(F < N) continue;
        mn = min(mn, N * P);
      }
    }
    if(mn <= B )
      cout << mn << endl;
    else
      cout << "stay homstay homee" <<endl;
  }
  return 0;
}
