#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){__
  int n, w;
  cin >> n >> w;
  vector<int> vec(n * 2);
  for(int i = 0; i < n * 2; i++)
    cin >> vec[i];
  sort(vec.begin(), vec.end());
  cout.precision(6);
  int ming = vec[0] * n, minb = vec[vec.size() / 2] * n;
  double div = w / 3.0;
  if(!(div <= ming and 2 * div <= minb)) {
    if(ming * 2 <= minb) {
      div = ming * 3;
    } else
      div = (minb * 3) / 2.0;
  } else
    div = w;
  cout << div << endl;

  return 0;
}
