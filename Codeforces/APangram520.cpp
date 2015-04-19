#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){__
  int in;
  string cad;
  cin>>in>>cad;
  vector<int> vec(26,0);
  for(int i = 0; i < in; i++){
    vec[tolower(cad[i]) - 'a']++;
  }
  for(int i = 0; i < vec.size(); i++){
    if(vec[i] == 0){
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
  return 0;
}
