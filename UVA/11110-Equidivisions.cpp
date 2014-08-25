#include <bits/stdc++.h>
using namespace std;

int mat[101][101];
bool visitado[101][101];
int n;
typedef pair<int,int> pii;

void init(){
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++){
      mat[i][j] = 0;
      visitado[i][j] = false;
    }
}

int visit(int x, int y){
  if(visitado[x][y]) return 0;
  stack<pii> st;
  int v,w;
  st.push(make_pair(x,y));
  visitado[x][y] = true;
  while(!st.empty()){
    v = st.top().first;
    w = st.top().second;
    st.pop();
    if(v >= n or w >= n) continue;
    if(v-1 >= 0) if(!visitado[v-1][w] and mat[v-1][w] == mat[x][y]) {
      st.push(make_pair(v-1,w));
      visitado[v-1][w] = true;
    }
    if(w-1 >= 0) if(!visitado[v][w-1] and mat[v][w-1] == mat[x][y]) {
      st.push(make_pair(v,w-1));
      visitado[v][w-1] = true;
    }
    if(v+1 < n) if(!visitado[v+1][w]and mat[v+1][w] == mat[x][y]) {
      st.push(make_pair(v+1,w));
      visitado[v+1][w] = true;
    }
    if(w+1 > 0) if(!visitado[v][w+1] and mat[v][w+1] == mat[x][y]) {
      st.push(make_pair(v,w+1));
      visitado[v][w+1] = true;
    }
  }
  return 1;
}

int solve(){
  int out = 0;
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++) out += visit(i,j);
  return out;
}

int main(){
  int x,y;
  string in;
  while(true){
    scanf("%i\n",&n);
    if(n == 0) break;
    init();
    for(int i = 1; i < n; i++){
      getline(cin,in);
      istringstream is(in);
      while(is>>x){
        is>>y;
        x--; 
        y--;
        mat[x][y] = i;
      }
    }
    if(solve() != n ) puts("wrong");
    else puts("good");
    
  }
  return 0;
}
