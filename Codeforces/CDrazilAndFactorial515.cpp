#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  int s; cin>>s;
  string a; cin>>a;
  vector<int> out;
  for(int i = 0; i < a.size(); i++){
    if(a[i] == '0' or a[i] == '1') continue;
    if(a[i] == '2') out.push_back(2);
    if(a[i] == '3') out.push_back(3);
    if(a[i] == '4'){
      out.push_back(3);
      out.push_back(2);
      out.push_back(2);
    }
    if(a[i] == '5') out.push_back(5);
    if(a[i] == '6'){
      out.push_back(5);
      out.push_back(3);
    }
    if(a[i] == '7') out.push_back(7);
    if(a[i] == '8'){
      out.push_back(7);
      out.push_back(2);
      out.push_back(2);
      out.push_back(2);
    }
    if(a[i] == '9'){
      out.push_back(7);
      out.push_back(3);
      out.push_back(3);
      out.push_back(2);

    }
  }
  sort(out.begin(),out.end());
  for(int i = out.size()-1; i >= 0 ; i--)
    cout<<out[i];
  cout<<endl;
  return 0;
}
