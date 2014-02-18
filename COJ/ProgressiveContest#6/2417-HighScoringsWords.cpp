#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
  int test,letras;
  char l;
  scanf("%i",&test);
  while(test--){
    string out, tmp;
    scanf("%i\n",&letras);
    vector<char> vechar;
    vector<char> vecons;
    for(int i = 0; i<letras; i++){
      scanf("%c[ \n]",&l);
      if(l == 'a' or l == 'e' or l=='i' or l=='o' or l=='u') vechar.push_back(l);
      else vecons.push_back(l);
    }
    sort(vechar.begin(),vechar.end());
    sort(vecons.begin(),vecons.end())
;    int vocal=0, cons= 0;
    for(int i = 0; i<vec.size(); i++){
      if(tmp.size())
    }
  }
  return 0;
}