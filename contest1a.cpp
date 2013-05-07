#include <cstdio>
#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main(){
  string in;
  int test,num;
  scanf("%i",&test);
  while(test--){
    map<string, int> mapa;
    scanf("%i",&num);
    printf("%i ",num);
    cin>>in;
    for(int i = 0; i<38; i++) mapa[in.substr(i,3)]++;
    printf("%i %i %i %i %i %i %i %i\n",mapa["TTT"],mapa["TTH"],mapa["THT"],mapa["THH"],mapa["HTT"],mapa["HTH"],mapa["HHT"],mapa["HHH"]);
  }
  return 0;
}