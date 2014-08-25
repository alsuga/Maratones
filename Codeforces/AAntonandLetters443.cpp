#include <bits/stdc++.h>

using namespace std;

int main(){
  string in;
  getline(cin,in);
  set<char> arbol;
  for(int i = 0; i < in.size(); i++){
    if(in[i] >= 'a' and in[i] <= 'z') arbol.insert(in[i]);
  }
  cout<<arbol.size()<<endl;
  return 0;
}