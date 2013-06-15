#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

int main(){
  int n,m,k,casos = 0,test,in,p,tmp;
  char s;
  scanf("%i",&test);
  while(test--){
    map<int,bool> mapa;
    scanf("%i %i %i",&n,&m,&k);
    vector <vector <pair<int,bool> > >vec(n);
    for(int i = 0; i<n; i++){
      for(int j = 0; j<k; j++){
        scanf("%i",&in);
        vec[i].push_back( make_pair((int)fabs(in), (in >= 0) ));
      }
    }
    scanf("%i",&p);
    for(int i = 0; i < p; i++){
      scanf("%i",&tmp);
      mapa[tmp]= true;
    }
    bool ant = false;
    for(int i = 0; i<vec.size();i++){
      if(ant)break;
      bool tmo = true;
      for(int j = 0; j<vec[i].size();j++){
        if(mapa[vec[i][j].first] and vec[i][j].second){
          tmo = false;
          break;
        }
        if(!mapa[vec[i][j].first] and !vec[i][j].second){
          tmo = false;
          break;
        }
      }
      ant = tmo;
    }
    printf("Case %i",++casos);
    if(ant) puts(": No");
    else puts(": Yes");
  }
  
  return 0;  
}
