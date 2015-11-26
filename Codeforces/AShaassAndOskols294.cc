#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

void solver(){
  int n, m, x, y;
  cin >> n;
  vector<int> wires(n);
  for(int i = 0; i < n; i++)
    cin >> wires[i];
  cin >> m;

  while(m--) {
    cin >> x >> y;
    x--;
    if(x - 1 >= 0)
      wires[x-1] += (y - 1 > 0)? y - 1: 0;
    if(x + 1 < n)
      wires[x+1] += wires[x] - y;
    wires[x] = 0;
  }
  for(int i = 0; i < n; i++)
    cout << wires[i] << endl;
}

int main(){__
  solver();
  return 0;
}
