#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
string alf = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";

int val(char a){
  if(a == '_') return 'Z'+1 - 'A';
  if(a == '.') return 'Z'+2 - 'A';
  return a - 'A';
}

int main(){__
  int sh;
  string cad;
  while(cin >> sh and sh != 0){
    cin>>cad;
    for(int i = 0; i < cad.size(); i++){
      cad[i] = alf[((val(cad[i]) + sh) % alf.size())];
    }
    for(int i = cad.size()-1; i >= 0; i--) printf("%c",cad[i]);
    puts("");
  }
  return 0;
}
