#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  string a;
  int caso = 0;
  while(cin>>a and a != "#"){
    cout<< "Case "<< ++caso <<": ";
    if(a == "HELLO"){
      cout<<"ENGLISH"<<endl;
      continue;
    }
    if(a == "HOLA"){
      cout<<"SPANISH"<<endl;
      continue;
    }
    if(a == "HALLO"){
    cout << "GERMAN" << endl; 
    continue;
    }

    if(a == "BONJOUR"){
      cout << "FRENCH" << endl; 
      continue;
    }

    if(a == "CIAO"){
      cout << "ITALIAN" << endl;
      continue;
    }

    if(a== "ZDRAVSTVUJTE"){
      cout << "RUSSIAN" << endl;
      continue;
    }
    cout<<"UNKNOWN" <<endl;
  }
  return 0;
}
