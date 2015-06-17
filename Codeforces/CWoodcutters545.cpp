#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

bool can(pair<int,int> a, pair<int,int> b){
   return (abs(a.first - b.first) > a.second) ;
}

int main(){__
  int n;
  while( cin >> n ) {
    vector<pair<int,int> > vec(n);
    for(int i = 0; i < n; i++)
      cin >> vec[i].first >> vec[i].second;
    int cont = 2;
    bool cl = true;
    for(int i = 1; i < n; i++) {
      if(cl) {
        if( can(vec[i], vec[i-1]) and i+1 < n)
          cont++;
        else
          cl = false;
      } else {
        if( can(vec[i-1], vec[i]) )
          cont++;
        else
          if(can(vec[i], vec[i-1]) and i+1 < n){
            cont++;
            cl = true;
          }
      }
    }
    cout << cont << endl;
  }
  return 0;
}
