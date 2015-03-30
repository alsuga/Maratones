#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

bool cmp(const pair<int,int> a, const pair<int,int> b){
  if(a.first == b.first) return (a.second < b.second);
  return (a.first < b.first);
}

int main(){__
  int n,k;
  cin>>n>>k;
  vector<pair <int,int> >vec(n);
  for(int i = 0; i < n; i++){
    cin>>vec[i].first;
    vec[i].second = i+1;
  }
  sort(vec.begin(),vec.end(),cmp);
  int acum = 0,num;
  for(num = 0; num < vec.size(); num++){
    if((acum+vec[num].first) > k)break;
    acum += vec[num].first;
  }
  cout<<num;
  for (int i = 0; i < num; i++) {
    if(i) cout<<" ";
    else cout<<endl;
    cout<<vec[i].second;
  }
  cout<<endl;
  return 0;
}
