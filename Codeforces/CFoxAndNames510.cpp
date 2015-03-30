#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  int n;
  cin>>n;
  vector<string> vec(n);
  string alphabet;
  for(int i = 0; i < n; i++){
    cin>>vec[i];
  }
  if(n == 1){
    cout<<"abcdefghijklmnopqrstuvwxyz"<<endl;
    return 0;
  }
  for(int i = 1 ; i < n; i++){
    for(int j = 0; j < vec[i-1].size() and j < vec[i].size(); j++){
      if(vec[i-1][j] != vec[i][j]){
        if(i-1 == 0 and j != 0 and vec[0][j] != vec[0][0]) alphabet+=vec[0][0];
        alphabet += vec[i-1][j];
        break;
      }
    }
  }
  for(int j = 0; j < vec[n-2].size() and j < vec[n-1].size(); j++){
    if(vec[n-1][j]!= vec[n-2][j]){
      alphabet += vec[n-1][j];
      break;
    }
  }
  vector<bool> al(28,false);
  for(int i = 0; i < alphabet.size(); i++){
    if(al[alphabet[i]-'a']){
      cout<<"Impossible "<<alphabet<<endl;
      return 0;
    }
    al[alphabet[i]-'a']= true;
  }
  for(int i = 0 ; i < ('z'-'a' +1); i++ ){
    if(!al[i]) alphabet += (char)(i+'a');
  }
  cout<<alphabet<<endl;
  return 0;
}
