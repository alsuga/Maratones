#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  string a,b;
  cin>>a>>b;
  map<char,int> aa,bb,cc;
  for(int i = 0; i < a.size(); i++)
    aa[a[i]]++;
  for(int i = 0; i < b.size(); i++){
    bb[b[i]]++;
    if(islower(b[i])){
      cc[toupper(b[i])]++;
    }else{
      cc[tolower(b[i])]++;
    }
  }
  int y = 0, w = 0;
  for(auto it = aa.begin(); it != aa.end(); ++it){
    y += min(it->second, bb[it->first]);
    w += min(it->second, cc[it->first]);
  }
  cout<<y<<" "<<w<<endl;
  return 0;
}
