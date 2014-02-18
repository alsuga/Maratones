#include <map>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int test;
  map<char,int> mapa;
  mapa['Q'] = 1;
  mapa['R'] = 1;
  mapa['O'] = 1;
  mapa['P'] = 1;
  mapa['A'] = 1;
  mapa['D'] = 1;
  mapa['B'] = 2;
  string str;
  scanf("%i",&test);
  while(test--){
    int cont = 0;
    cin>>str;
    for(int i = 0; i < str.size(); i++){
      cont += mapa[str[i]];
    }
    printf("%i\n",cont);
  }
  return 0;
}