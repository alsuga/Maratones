#include <bits/stdc++.h>
using namespace std;
#define ___ ios_base::sync_with_stdio(0);cin.tie(NULL);
#define endl '\n'

long long sum(long long in){
  long long in1 = in+1;
  if(in % 2 == 0)  in = in>>1;
  else in1 = in1>>1;
  return (in * in1);
}

int main(){
  int n,m; cin>>n>>m;
  long long kmin,kmax,md = 0, ac = 0;
  kmax = n-m;
  kmax = sum(kmax);
  
  kmin = n/m;
  if(n%m != 0 ) md = n%m;
  ac = sum(kmin) * md;
  kmin = sum(kmin-1) * (m-md);
  
  cout<<kmin+ac<<" "<<kmax<<endl;

  return 0;
}