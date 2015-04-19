#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){__
  int num; cin >> num;
  vector<int> vec(num);
  for(int i = 0; i < num; i++)
    cin>>vec[i];

  sort(vec.begin(), vec.end(),std::greater<int>());

  vector<long long> ot;
  for(int i = 0; i < num-1;i++){
    if(vec[i] == vec[i+1] or vec[i]-1 == vec[i+1]  ){
      ot.push_back(vec[i+1]);
      i++;
    }
  }

  if(ot.size() < 2){
    cout<<"0"<<endl;
    return 0;
  }
  unsigned long long out = 0;
  for(int i = 0; i < ot.size(); i+=2){
    out += ot[i]*ot[i+1];
  }
  cout<<out<<endl;

  return 0;
}
