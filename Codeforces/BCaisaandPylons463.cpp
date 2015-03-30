#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n,act = 0,total = 0,energy = 0;
  cin>>n;
  vector<int> vec(n);
  for(int i = 0; i < n; i++) {
    cin>>vec[i];
    energy += act - vec[i];
    if(energy < 0) {
      total += (energy * -1);
      energy = 0;
    }
    act = vec[i];
  }
  cout<<total<<endl;
  return 0;
}