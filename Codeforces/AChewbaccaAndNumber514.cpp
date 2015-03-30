#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  string a;
  int tmp;
  cin>>a;
  for(int i = 0; i < a.size(); i++){
    tmp = a[i]- '0';
    if(9-tmp < tmp and !(i==0 and a[i]== '9')) a[i] = ((9-tmp) + '0');
  }
  cout<<a<<endl;
  return 0;
}
