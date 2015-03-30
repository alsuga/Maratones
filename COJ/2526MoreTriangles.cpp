#include <bits/stdc++.h>

using namespace std;

int binarySearch(int A[],int i, int j, int n);

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n, in[100001],ac,cont = 0;
  while(cin>>n){
    cont = 0;
    for(int i = 0; i < n; i++) {
      cin>>in[i];
      if(i) in[i]+=in[i-1];
    }
  
    ac = in[n-1]/3;
    for(int i = 0; i < n and in[i] <= ac; i++ ){
      if((binarySearch(in,0,n,in[i]+ac) >= 0) and (binarySearch(in,0,n,in[i]+ac+ac) >= 0) ) cont++;
    }
    cout<<cont<<endl;
  }
  return 0;
}

int binarySearch(int A[],int i, int j, int n){
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


