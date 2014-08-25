#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

long s(long x){
  long acum = x%10;
  while(x/=10) acum += x%10;
  return acum;
}

int main(){
  long a,b,c, tmp;
  ios::sync_with_stdio(false);
  cin>>a>>b>>c;
  vector<int> vec;
  for(int x = 1; x < 81; x++){
    tmp = (b * (int)(pow(x, a))) + c;
    if( x == s(tmp) and tmp < 1e9 ) {
      vec.push_back(tmp);
    }
  }
  cout<<vec.size()<<endl;
  if(vec.size() > 0){  
    for(int i = 0; i < vec.size(); i++){
      if(i > 0) cout<<" ";
      cout<<vec[i];
    }
    cout<<endl;
  }
  return 0;
}
