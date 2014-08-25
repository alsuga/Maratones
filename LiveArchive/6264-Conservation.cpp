#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> graph;
typedef pair<int,int> pii;

int topo(graph &grafo, vi inco, vi &pos, int act){
  queue<int> Q[2];
  int cur, total = 0;
  for(int i = 0; i < inco.size(); i++) if(inco[i] == 0) {
    Q[pos[i]].push(i);
  }
  while(!Q[1].empty() or !Q[0].empty()){
    if( Q[act].empty() ){
      act = 1 - act;
      total++;
    }

    cur= Q[act].front();
    Q[act].pop();
    for(int i =0 ; i < grafo[cur].size(); i++){
      inco[grafo[cur][i] ]--;
      if(inco[ grafo[cur][i]  ] == 0){
        Q[pos[grafo[cur][i]]].push(grafo[cur][i]);
      }
    }
  }
  return total;
}

int main(){
  int test,in,a,b,n,m; scanf("%i",&test);
  while(test--){
    scanf("%i %i",&n,&m);
    vi pos(n);
    for(int i = 0; i < n; i++){
      scanf("%i",&a);
      pos[i] = --a;
    }
    graph grafo(n);
    vi inco(n,0);
    while(m--){
      scanf("%i %i", &a,&b);
      grafo[a-1].push_back(b-1);
      inco[b-1]++;
    }
    printf("%i\n", min(topo(grafo,inco,pos,0), topo(grafo,inco,pos,1)));
  }
  return 0;
}

