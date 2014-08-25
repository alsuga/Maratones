#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;
typedef map<int, vector<pii> > mp;

int main(){
  int n, pos,in;
  string dic;
  while(true){
    scanf("%i %i", &n, &pos);
    if(n + pos == 0) break;
    mp mapa;
    for(int i = 0; i < n; i++){
      cin>>dic>>in;
      mapa[in].push_back( make_pair(i+1, (dic == "L")? -1:1 ) );
    }
    bool flag = true;
    int last = -1, cont = 0;
    while(flag){
      flag = false;
      mp tmp;
      for(int i = pos-1; i >= 1; i--){
        while( !mapa[i].empty() ){
          flag = true;
          pii tmpii = mapa[i].back();
          mapa[i].pop_back();
          if(i + tmpii.second < 1 or i + tmpii.second == pos) {
            last = tmpii.first;
          }
          else{
            tmp[i + tmpii.second].push_back( tmpii );
            if(tmp[i + tmpii.second ].size() > 1){
              for(int j = 0; j < tmp[i + tmpii.second].size(); j++)  tmp[i + tmpii.second ][j].second *= -1; 
            }
          }

        }
      }
      mapa = tmp;
      cont++;
    }
    printf("%i %i\n",cont-1, last);
  }
  return 0;
}