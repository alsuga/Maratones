#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){
  int B, N, deb, cred, amount;
  while( cin >> B >> N and B + N ) {
    vector<int> vec(B);
    for( int i = 0; i < B; i++ )
      cin >> vec[i];
    for( int i = 0; i < N; i++ ) {
      cin >> deb >> cred >> amount;
      vec[deb - 1] -= amount;
      vec[cred - 1] += amount;
    }

    bool yes = true;
    for( int i = 0; i < B and yes; i++ )
      if( vec[ i ] < 0 )
        yes = false;
    if( yes )
      cout << "S\n";
    else
      cout << "N\n";
  }
  return 0;
}
