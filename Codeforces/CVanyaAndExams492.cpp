#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

bool comp(pair<int,int> p, pair<int,int> q){
  if(p.second < q.second) return true;
  if(p.second > q.second) return false;
  if(p.first < q.first) return true;
}

int main(){__
  long long avg = 0;
  int n,r; cin>>n>>r>>avg;
  avg *= n;
  vector<pair<int,int> >vec(n);
  long long actavg = 0;
  for(int i = 0; i < n; i++){
    cin>>vec[i].first>>vec[i].second;
    actavg += vec[i].first;
  }

  sort(vec.begin(),vec.end(),comp);

  long long acum = 0;
  long long diff = avg -actavg;
  for(int i = 0; i < vec.size() and actavg < avg; i++){
    if(vec[i].first == r) continue;
    if(actavg + (r-vec[i].first) <= avg){
      actavg += r-vec[i].first;
      acum += vec[i].second*(r-vec[i].first);
    }else{
      acum += (avg-actavg)* vec[i].second;
      actavg = avg;
    }
  }
  cout<<acum<<endl;
  return 0;
}
