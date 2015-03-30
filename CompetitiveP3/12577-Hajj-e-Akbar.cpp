#include <bits/stdc++.h>
using namespace std;

int main(){
  int caso = 0;   string a;
  while(cin>>a){
    if(a == "*") return 0;
    cout<<"Case "<<++caso<<": ";
    if(a == "Hajj") cout<<"Hajj-e-Akbar"<<endl;
    else cout<<"Hajj-e-Asghar"<<endl;
  }
  return 0;
}
