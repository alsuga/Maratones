#include <bits/stdc++.h>

using namespace std;

int main(){
  int test,cont = 0;
  scanf("%i",&test);
  map<int,int> mapa;
  for(int j = 0; j < test ; j++) {
      string in;
      cin>>in;
      for(int i = 0; i < in.size() ; i++){
        if(mapa[in[i]] == j) mapa[in[i]]++;
      }
  }
  for (int i = 'a'; i <= 'z'; ++i){
    if(mapa[i] >= test) cont++;
  }
  printf("%i\n", cont);
  return 0;
}