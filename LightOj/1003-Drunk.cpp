#include <bits/stdc++.h>

using namespace std;

typedef vector<string> ar;
typedef map<string,ar> graph;
typedef map<string,int> mapsi;

bool ciclo(graph &grafo,mapsi &inco){
  queue<string> Q;
  for(mapsi::iterator it = inco.begin(); it != inco.end(); ++it )  if( it->second == 0) Q.push(it->first);
  while(!Q.empty()){
    string cur = Q.front();
    Q.pop();
    for(int i =0 ; i < grafo[cur].size(); i++){
      inco[grafo[cur][i] ]--;
      if(inco[ grafo[cur][i]  ] == 0) Q.push(grafo[cur][i] );
    }
  }
  for(mapsi::iterator it = inco.begin(); it != inco.end(); ++it ) if( it->second != 0)   return false;
  return true;
}

int main(){
  int test,in; scanf("%i",&test);
  string from,to;
  graph grafo;
  mapsi inco;
  for(int ca= 1; ca <= test; ca++){
    grafo.clear();
    inco.clear();
    scanf("%i",&in);
    while(in--){
      cin>>from>>to;
      grafo[from].push_back(to);
      inco[from] = inco[from];
      inco[to]++;
    }
    printf("Case %i: ", ca);
    if( ciclo(grafo,inco) ) puts("Yes");
    else puts("No");
  }
  return 0;
}


/**********
live archive 6264 conservation
**********/