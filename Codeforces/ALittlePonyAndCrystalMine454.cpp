#include <bits/stdc++.h>

#define endl '\n';

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int n,w,d; cin>>n;
  w = n/2;
  d = 1;
  for(int i = 0; i <= n/2; i++){
    for(int j = 0; j < w; j++) cout<<"*";
    for(int j = 0; j < d; j++) cout<<"D";
    for(int j = 0; j < w; j++) cout<<"*";
    w--;
    d+= 2;
    cout<<endl;
  }
  w = 1;
  d-= 4;
  for(int i = 0; i < n/2; i++){
    for(int j = 0; j < w; j++) cout<<"*";
    for(int j = 0; j < d; j++) cout<<"D";
    for(int j = 0; j < w; j++) cout<<"*";
    w++;
    d-= 2;
    cout<<endl;
  }
  return 0;
  
}