#include <iostream>
#include <cstdio>
#include <string>
#include <map>

using namespace std;

int main(){
  int test, mayor = 0,num;
  string in, max;
  scanf("%i",&test);
  map <string,int> mapa;
  while(test--){
    cin>>in;
    scanf("%i",&num);
    mapa[in] += num;
    if(mapa[in] > mayor){
      mayor = mapa[in];
      max = in;
    }
    num = 0;
    for (map<string,int>::iterator i = mapa.begin(); i != mapa.end(); ++i){
      if(num < i->second){
        in = i->first;
        num = i->second;
      }
    }
    if(mapa[in] != mapa[max]){
      mayor = num;
      max = in;
    }
  }
  cout<<max<<endl;
  return 0;
}