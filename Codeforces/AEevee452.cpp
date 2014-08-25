#include <bits/stdc++.h>

using namespace std;

int main(){
  int in;
  bool flag;
  string word;
  vector<string> out;
  out.push_back("jolteon");
  out.push_back("flareon");
  out.push_back("umbreon"); 
  out.push_back("leafeon");
  out.push_back("glaceon"); 
  out.push_back("sylveon");
  scanf("%i\n",&in);
  getline(cin,word);
  if( in == 6) puts("espeon");
  if( in == 8) puts("vaporeon");
  if( in == 7){
    for(int j = 0; j < out.size(); j++){
      flag = true;
      for(int i = 0; i < in; i++){
        if(word[i] == '.') continue;
        if(word[i] != out[j][i]) {
          flag = false;
          break;
        }    
      }
      if(flag) {
        cout<<out[j]<<'\n';
        break;
      }
    }
  }
  return 0;
}