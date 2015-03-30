#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  string in,out;
  cin>>in;
  vector<pair<char,int> > vec;
  for(int i = 0; i < in.size(); i++){
    if((int)(in[i]-'0')%2 == 0)
      vec.push_back(make_pair(in[i],i));
  }
  if(vec.size()== 0 or in.size() == 1){
    cout<<-1<<endl;
    return 0;
  }
  char tmp;
  for(int i = 0; i < vec.size(); i++){
    if(vec[i].first < in[in.size()-1] or (i+1 == vec.size())){
      tmp = in[in.size()-1];
      in[in.size()-1] = vec[i].first;
      in[vec[i].second] = tmp;
      break;
    }
  }
  cout<<in<<endl;
  return 0;
}
