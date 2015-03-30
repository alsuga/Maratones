#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  string cad;
  int in;
  cin>>cad>>in;
  vector<string> vec(in);
  for(int i = 0; i < in; i++){
    cin>>vec[i];
  }
  size_t tmp;
  sort(vec.begin(),vec.end());
  for(int i = 0; i < in; i++){
    tmp = vec[i].find(cad);
    if(tmp == 0 ){
      cout<<vec[i]<<endl;
      return 0;
    }
  }
  cout<<cad<<endl;
  return 0;
}