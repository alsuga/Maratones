#include <bits/stdc++.h>

using namespace std;

int votos[1001][1001];

int main(){
  int cand,test,ba,min,max; scanf("%i",&test);
  string in;
  int total[21];
  while(test--){
    cand; scanf("%i\n",&cand);
    vector<string> st(cand);
    for(int i = 0; i < cand; i++) {
      getline(cin,in);
      st[i]= in;
      total[i] = 0;
    }
    for(ba = 0; ; ba++) {
      char input;
      input = cin.get();
      if (input == '\n' or input == EOF) break;
      cin.putback(input);       
      for (int j=0; j<cand; j++){
          cin>>votos[ba][j];
      }
      cin.get();
    }
    vector<int> borrar;
    while(true){
      max = 0, min = 0;
      for(int i = 0; i < ba; i++){
        for(int j = 0; j < borrar.size(); j++)
          if( votos[i] [borrar[j] ] == 1)  for(int k = 0; k < cand; k++) votos[i][k]--;        

        for(int j = 0; j<cand; j++){
          if(votos[i][j] == 1)  if(++total[j] > max) max =  total[j];
          if(total[min] > total[j] && (j) min = j;
        }
      }
      if( (max > ba/2.0 ) or (total[min] == max))   break;
      
      borrar.clear();

      for(int i = 0; i < cand; i++){
        if(total[i] == total[min]) borrar.push_back(i); 
        total[i] = 0;
      }
    }
    for(int i = 0; i < cand; i++) if(total[i] == max) cout<<st[i]<<endl;
  }
  return 0;
}