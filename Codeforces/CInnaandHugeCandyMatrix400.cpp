#include <bits/stdc++.h>

using namespace std;

int main(){
  int m,n,x,y,z,p,tmp;
  cin>>n>>m>>x>>y>>z>>p;
  x %= 4;
  y %= 2;
  z %= 4;
  z = 3 - z + 1;
  z %= 4;
  vector<pair<int,int> > vec(p);
  for (int i = 0; i < vec.size(); i++)
    cin>>vec[i].first>>vec[i].second;
  while(x--){
    for(int i = 0; i < vec.size(); i++){
      tmp = vec[i].first;
      vec[i].first = vec[i].second;
      vec[i].second = n - tmp + 1;
    }
    swap(n,m);
  }
  while(y--){
    for (int i = 0; i < vec.size(); i++) {
      vec[i].second = m - vec[i].second + 1;
    }
  }
  while(z--){
    for(int i = 0; i < vec.size(); i++){
      tmp = vec[i].first;
      vec[i].first = vec[i].second;
      vec[i].second = n - tmp + 1;
    }
    swap(n,m);
  }
  for (int i = 0; i < vec.size(); i++) {
    cout<<vec[i].first<<" "<<vec[i].second<<endl;
  }
  return 0;
}
