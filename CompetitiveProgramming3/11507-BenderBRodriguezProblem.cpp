#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>
#include <map>

using namespace std;

int mat[6][6] = { {-1,-1,-1,-1,-1,-1},
                  {-1,-1,-1,-1,-1,-1},
                  {2,3,1,0,4,5},
                  {3,2,0,1,4,5},
                  {4,5,2,3,1,0},
                  {5,4,2,3,0,1}
};

int main(){
  char in[2];
  int l,pos;
  map<string,int> mapa;
  map<int,string> mapa2;
  mapa["+x"] = 0;
  mapa["-x"] = 1;
  mapa["+y"] = 2;
  mapa["-y"] = 3;
  mapa["+z"] = 4;
  mapa["-z"] = 5;
  mapa2[0]="+x";
  mapa2[1]="-x";
  mapa2[2]="+y";
  mapa2[3]="-y";
  mapa2[4]="+z";
  mapa2[5]="-z";    
  while(true){
    scanf("%i",&l);
    if(l == 0) break;
    l-=1;
    pos = 0;
    while(l--){
      scanf("%s",in);
      if(in[0] == 'N') continue;
      //cout<<mapa2[pos]<<" con => "<<in<<" para => ";
      pos = mat[ mapa[in] ][pos];
      //cout<<mapa2[pos]<<endl;
    }
    printf("%s\n",(mapa2[pos]).c_str());
  }
  return 0;
}