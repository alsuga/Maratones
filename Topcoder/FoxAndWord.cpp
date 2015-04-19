#include<bits/stdc++.h>

using namespace std;

class FoxAndWord{
  public:
  int howManyPairs(vector <string> words){
    int cont = 0;
    for(int i = 0; i < words.size()-1; i++){
      if(words[i].length() != words[i].length() ) continue;
      size_t init_pos = 0, init_limit = 1;
      while(init_limit < words[i].length()){
        if((words[i].substr(init_pos,init_limit) ==  words[i+1].substr(words[i].size() - init_limit) ) and (words[i].substr(init_limit) == words[i+1].substr(0,words[i].size() - init_limit) ) )    cont++;
        init_limit++;
      }
    }
    return cont;
  }
};
