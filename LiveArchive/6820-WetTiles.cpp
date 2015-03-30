#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

bool visit[1001][1001];

int main(){__
  int X,Y,T,L,W, tmp1,tmp2,tmp3,tmp4;
  while(cin>>Y and Y > 0){
    cin>>X>>T>>L>>W;
    int total = 0;
    memset(visit,false,sizeof visit);
    queue<pair<int,int> >leak[2];
    for(int i = 0; i < L; i++){
      cin>>tmp2>>tmp1;
      tmp2--,tmp1--;
      leak[0].push(make_pair(tmp1,tmp2));
      visit[tmp1][tmp2] = true;
    }

    while(W--){
      cin>>tmp2>>tmp1>>tmp4>>tmp3;
      tmp1--,tmp2--,tmp3--,tmp4--;
      visit[tmp3][tmp4] = true;
      int ax = (tmp3 - tmp1 > 0)? 1: (tmp1 == tmp3 ? 0 : -1);
      int ay = (tmp4 - tmp2 > 0)? 1: (tmp4 == tmp2 ? 0 : -1);
      for(int i = tmp1, j = tmp2; i != tmp3 or j != tmp4; i+= ax, j += ay){
        //mat[i][j] = -1;
        visit[i][j] = true;
      }
    }
    pair<int,int> actual;
    int quq= 0;
    queue<pair<int,int> >nleak;
    while(T-- and (!leak[0].empty() or !leak[1].empty())){
      while(!leak[quq].empty()){
        actual = leak[quq].front();
        leak[quq].pop();
        int i = actual.first;
        int j = actual.second;
        total++;
        if(i>0) if(!visit[i-1][j]){ leak[1-quq].push(make_pair(i-1,j));visit[i-1][j] = true;}
        if(j>0) if(!visit[i][j-1]){ leak[1-quq].push(make_pair(i,j-1));visit[i][j-1] = true;}
        if(i+1 < X) if(!visit[i+1][j]){ leak[1-quq].push(make_pair(i+1,j)); visit[i+1][j] = true;}
        if(j+1 < Y) if(!visit[i][j+1]){ leak[1-quq].push(make_pair(i,j+1)); visit[i][j+1] = true;}
      }
      quq = 1-quq;
    }
    cout<<total<<endl;
  }
  return 0;
}
