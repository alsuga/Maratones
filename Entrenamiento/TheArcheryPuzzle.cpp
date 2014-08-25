#include <bits/stdc++.h>

using namespace std;

int main(){
  int cand,s,test; scanf("%i",&test);
  int punt[51];
  int rec[301],val[301];
  for(int caso = 1 ; caso <= test ; caso++) {
    scanf("%i %i", &cand,&s);
    for(int i = 0; i < cand; i++) scanf("%i",&punt[i]);
    vector<int> vec(s+1,numeric_limits<int>::max() -10);
    vec[0] = 0;
    rec[1] = 0;
    for(int i = 1; i <= s; i++){
      for(int j = 0;  j < cand; j++){
        if( punt[j] <= i and (vec[i-punt[j] ] +1) < vec[i] ) {
          vec[i] = vec[i-punt[j] ] +1;
          rec[i] = i-punt[j];
          val[i] = punt[j];  
        }
      }
    }
    if(vec[s] < numeric_limits<int>::max() -10){
      printf("Case %i: [%i]", caso, vec[s]);
      vector<int> ord;
      while(s > 0) {
         ord.push_back(val[s]);
         s = rec[s];
      }
      sort(ord.begin(), ord.end());
      for(int i = ord.size()-1; i >= 0; i--) printf(" %i", ord[i]);
      puts("");
    }else{
    printf("Case %i: impossible\n", caso);
    }
  }
  return 0;
}