#include <bits/stdc++.h>

using namespace std;

int main(){
  string a,b,c,nueva;
  int n;
  scanf("%i",&n);
  cin>>a>>b>>c;
  for(int i = 0; i<n; i++){
    if(a[i] == b[i] or a[i] == c[i]) {
      nueva += a[i];
      continue;
    }
    nueva+= b[i];
  }
  cout<<nueva<<endl;
  return 0;
}