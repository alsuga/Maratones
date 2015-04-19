#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  int n,acuma=0,acumb=0,tmp,last;cin>>n;
  vector<int> a,b;
  while(n--){
    cin>>tmp;
    last = tmp;
    if(tmp > 0){
      acuma += tmp;
      a.push_back(tmp);
    }else{
      tmp *= -1;
      acumb += tmp;
      b.push_back(tmp);
    }
  }
  if(acuma > acumb) {cout<<"first"<<endl;return 0;}
  if(acuma < acumb) {cout<<"second"<<endl;return 0;}
  for(int i = 0; i < min(a.size(),b.size()); i++){
    if(a[i] > b[i]){
      cout<<"first"<<endl;
      return 0;
    }
    if(a[i] == b[i]) continue;
    cout<<"second"<<endl;
    return 0;
  }
  if(a.size() > b.size()){cout<<"first"<<endl; return 0;}
  if(a.size() < b.size()){cout<<"second"<<endl; return 0;}
  if(last > 0) cout<<"first"<<endl;
  else cout<<"second"<<endl;
  return 0;
}
