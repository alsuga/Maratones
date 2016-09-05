#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll expo(ll a, ll b){
  ll result = 1;

  while ( b ){
    if (b & 1){
      result *= a;
    }
    b >>= 1 ;
    a *= a;
  }

  return result;
}

ll solve(int n, int bx) {
  ll out = 0;
  int tmp;
  for(int i = n - 1 ; i >= 0; --i) {
    cin >> tmp;
    if(tmp)
      out += tmp * expo(bx, i);
  }
  return out;
}


int main(){
  int n, bx;
  ll b1 = 0, b2 = 0;
  cin >> n >> bx;
  b1 = solve(n, bx);
  cin >> n >> bx;
  b2 = solve(n, bx);

  if(b1 == b2)
    cout << "=\n";
  if(b1 < b2)
    cout << "<\n";
  if(b1 > b2)
    cout << ">\n";
  return 0;
}
