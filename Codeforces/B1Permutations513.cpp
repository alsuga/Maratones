#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int minel(vector<int> &a,int x, int y){
  int mn = 10000;
  for (int i = x; i <= y; i++) {
    if(a[i] < mn) mn = a[i];
  }
  return mn;
}

int fr(vector<int> &a, int n){
  int acum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      acum += minel(a,i,j);
    }
  }
  return acum;
}

int main(){__
  vector< vector<int> > vii;
  int n,m; cin>>n>>m;
  vector<int> vi(n), re(n);
  for(int i = 0 ; i < n; i++){
    vi[i] = i+1;
    re[n-i-1] = n-i;
  }
  long long fm = fr(re,n);
  do {
    if(fm == fr(vi,n)){
      vii.push_back(vi);
    }
    if(vii.size() == m) break;
  } while (next_permutation(vi.begin(),vi.end()));
  for(int i = 0; i < vii[m-1].size(); i++){
    if(i) cout<<" ";
    cout<<vii[m-1][i];
  }
  cout<<endl;
  return 0;
}
