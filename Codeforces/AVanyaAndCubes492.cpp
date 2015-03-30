#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int sum(int a){
  return ((a*(a+1))/2);
}

int main(){__
  int in; cin>>in;
  vector<int> vec;
  int acum = 0;
  for(int i = 1; acum <= 10000; i++){
    acum += sum(i);
    vec.push_back(acum);
  }

  vector<int>::iterator low;
  low = upper_bound (vec.begin(), vec.end(), in); //
  cout<<(low-vec.begin())<<endl;
  return 0;
}
