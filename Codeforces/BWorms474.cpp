#include <bits/stdc++.h>

using namespace std;

long long binarySearch(vector<long long> &A,int i, int j, long long n){
  int m, result= -1;
  while(i <= j){
    m=(i+j)>>1;
    if(A[m] == n){
      result = m;
      break;
    }else{
      if(n > A[m]) i = m+1;
      else j = m-1;
    }
  }
  if(result == -1) result = (-1)*i -1;
  return result;
}

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  long long n,m,sq,out; cin>>n;
  vector<long long> vec(n);
  for(int i = 0; i < vec.size(); i++){
    cin>>vec[i];
    if(i) vec[i] += vec[i-1];
  }
  cin>>m;
  while(m--){
    cin>>sq;
    out = binarySearch(vec,0,vec.size()-1,sq);
    if(out < 0) {
      out *= -1;
      out--;
    }
    cout<<out+1<<endl;
  }
  return 0;
}