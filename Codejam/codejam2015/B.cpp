#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

typedef map<int,int> mpi;

int foo(int init, mpi mp, int out, int cs) {
  //if(init 0) return out;
  int first, second, ac = 0,tmp, tmplus, aaa;
  int it = init;
  //for(int it = init; it != 0; ++it) {
  if(mp[it] == 0) return foo(it+1, mp, out, cs);
  first = it * -1;
  second = mp[it];
  if(first > 3) {
    int mx = 2<<20;
    for(int i = 0; first - i >= 2 ; i++ ) {
      if(i == 1) continue;
      mp[(first - i) * -1]++;
      mp[(i) * -1]++;

      tmp = cs;
      tmplus = 1;
      if(i  == 0) {
        if(first - cs > 0)
          tmp = first - cs;
        tmplus = 0;
      }
      aaa = foo(it+1, mp, out + tmplus, tmp);
      mx = min(aaa, mx);

      mp[(first - i) * -1]--;
      mp[(i) *-1]--;
    }
    //cout<<"mx: "<<mx<<" "<<cs<<endl;
    out += ((mx - cs > 0)? mx - cs : cs);
  } else {
    //cout<<first<<" - "<<cs<<" "<<out<<endl;
    out += ((first - cs > 0)? first - cs : cs);
  }
  //}
  return out;
}

int main(){//__
  int test,num,in, ad;
  cin>>test;
  mpi mp;
  for(int t = 0; t < test; t++) {
    cin>>num;
    ad = 0;
    mp.clear();
    while(num--){
      cin>>in;
      if(in < 4)
        ad = max(ad,in);
      else
        mp[in * (-1)]++;
    }
    if(ad != 0) mp[ad * -1]++;
    int out = foo(-9, mp, 0, 0);
    cout<<"Case #"<<t+1<<": "<<out<<endl;
  }
  return 0;
}
