#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){__
  string in, out;
  cin>>in;
  int pos = -1;
  for(int i = 0, j = in.size()-1; i < j; i++, j--){
    if(in[i] != in[j]){
      if(pos != -1){
        cout<<"NA"<<endl;
        return 0;
      }
      pos = i;
      j++;
    }
  }
  cout<<pos<<endl;
  return 0;
}
