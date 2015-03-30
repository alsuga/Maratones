#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  int n,m;cin>>n;
  vector<int> vecn(n);
  for(int i = 0; i < n; i++) cin>>vecn[i];
  cin>>m;
  vector<int> vecm(m);
  for(int i = 0; i < m; i++) cin>>vecm[i];
  sort(vecn.begin(),vecn.end());
  sort(vecm.begin(),vecm.end());
  if(n == m and (vecn[n-1] <= vecm[0] or (vecn[0]<= vecm[0] and vecn[n-1] <= vecm[m-1]))){
    cout<<n*3<<":"<<m*3<<endl;
    return 0;
  }


  if(n > m){
    cout<<vecn.size()*3<<":";
    int acum = 0;
    for(int i = 0; i < vecm.size(); i++){
      if(vecm[i] >= vecn[0]) acum+=3;
      else acum+=2;
    }
    cout<<acum<<endl;
    return 0;
  }

  if(n < m and vecn[0] > vecm[m-1]){
    cout<<n*3<<":"<<m*2<<endl;
    return 0;
  }


  int mayn = 0, maym = 0, maxmay = 0, maxdiff = -300000,ii = -1;
  for(int i = vecn.size()-1,j = vecm.size()-1; i >= 0;){
    if(vecn[i] > vecm[j] or j < 0){
      mayn++;
      if(mayn - maym > maxdiff){
        maxdiff = mayn-maym;
        ii = i;
      }
      i--;
    }else{
      maym++;
      j--;
    }
  }
  if(maxdiff < 0){
    cout<<n*2<<":"<<m*2<<endl;
    return 0;
  }
  int acum = 0;
  for(int i = 0; i < n; i++){
    if(i < ii) acum+=2;
    else acum+=3;
  }
  cout<<acum<<":";
  acum = 0;
  for(int i = 0; i < m; i++){
    if(vecm[i] < vecn[ii]) acum+=2;
    else acum+=3;
  }
  cout<<acum<<endl;
  return 0;
}
