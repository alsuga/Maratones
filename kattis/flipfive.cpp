#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'


int s(int i, int j){
  return i*3 + j;
}

int gen(map<int, int> &visited, int tab, int depth){
  if(visited[tab] > 0) return visited[tab];
  if(tab == 0) return depth;
  int tmp, dpt = (1<<31) - 1;
  if(visited[tab] < 0) return dpt;
  visited[tab] = -1;
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      tmp = tab ^ (1 << s(i, j));
      if(i > 0) tmp ^= (1 << s(i-1, j));
      if(j > 0) tmp ^= (1 << s(i, j-1));
      if(i < 2) tmp ^= (1 << s(i+1, j));
      if(j < 2) tmp ^= (1 << s(i, j+1));
      dpt = min(dpt, gen(visited, tmp, depth + 1));
    }
  }
  visited[tab] = dpt;
  return dpt;
}

int main() {
  //flip tab(3);
  int tab = 0;
  int n;
  cin>>n;
  string in;
  while(n--) {
    map<int, int> visited;
    for(int i = 0; i < 3; i++) {
      cin>>in;
      for(int j = 0; j < 3; j++)
        tab |= (in[j] == '*')<<s(i, j);
    }
    cout<<gen(visited, tab, 0)<<endl;
  }
  return 0;
}
