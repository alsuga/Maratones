#include<bits/stdc++.h>

using namespace std;

double euc(pair<double,double> uno, pair<double,double> dos ){
  double out = sqrt( pow(uno.first - dos.first,2)  + pow(uno.second - dos.second,2));  
  return out;
}


int n;

void  solve(int a,int b,vector<int> arr){
int c = 0;
  for(int i = 0;i<n*2;i++){
    cout<<arr[i]<<", ";
    if(arr[i] != -1)c++;
  }
  cout<<endl;
  if(c==n*2)return;
  for(int i=0;i<n*2;i++){
    
    for(int j=0;j<n*2;j++){
      if(i!=j and  arr[j]==-1 and arr[i]==-1){
       
        arr[i] = i;
        arr[j] = i;
        solve(i,j,arr);
        arr[i] = -1;
        solve(i,j,arr);
      }
    }
  }
}

int main(){
  cin>>n;
  vector<int> a(n*2,-1);
  /*vector<pair<int,int> > d(n*2);
  for(int i=0;i<n*2;i++){
    cin>>d[i].first>>d[i].second;
  }
  */

  solve(0,0,a);
  
}
