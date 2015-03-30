#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int a,b;
  cin>>a>>b;
  vector<int> vec(a);
  for(int i = 0; i < a; i++){
    cin>>vec[i];
  }
  sort(vec.begin(), vec.end());
  cout<<vec[vec.size()-b]<<endl;
  return 0;
}