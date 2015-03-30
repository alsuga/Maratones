#include <bits/stdc++.h>

#define __   ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){ __
  int p,q,l,r,t1,t2;
  cin>>p>>q>>l>>r;
  vector<pair<int,int> > pv(p),qv(q);
  for(int i = 0; i < p; i++){
    cin>>t1>>t2;
    pv[i] = make_pair(t1,t2);
  }
  for(int i = 0; i < q; i++){
    cin>>t1>>t2;
    qv[i] = make_pair(t1,t2);
  }
  int cont = 0;
  bool flag;
  for(int i = l; i <= r; i++){
    flag = true;
    for(int j = 0; j < p and flag; j++){
      for(int k = 0; k < q ; k++){
        if(pv[j].first <= qv[k].second+i and pv[j].second >= qv[k].second+i ){
          cont++;
          flag = false;
          break;
        }
        if(pv[j].first <= qv[k].first+i and pv[j].second >= qv[k].first+i){
          cont++;
          flag = false;
          break;
        }
        if(pv[j].first <= qv[k].first+i and pv[j].second >= qv[k].second+i){
          cont++;
          flag = false;
          break;
        }
        if(pv[j].first >= qv[k].first+i and pv[j].second <= qv[k].second+i){
          cont++;
          flag = false;
          break;
        }
      }
    }

  }
  cout<<cont<<endl;
  return 0;
}