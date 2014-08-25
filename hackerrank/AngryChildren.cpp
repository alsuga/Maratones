#include <bits/stdc++.h>

using namespace std;

int main(){
  int N,K,min; scanf("%i %i",&N,&K);
  vector<int> vec(N);
  for(int i = 0; i < N ; i++) {
      cin>>vec[i];
  }
  sort(vec.begin(), vec.end());
  min = vec[ N-1 ];
  for(int i = 0; i < N-K; i++){
    if(vec[K + i -1] - vec[i] < min) min = vec[K + i -1] - vec[i];
  }
  cout<<min<<endl;
  return 0;
}