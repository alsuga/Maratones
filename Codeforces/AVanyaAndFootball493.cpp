#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int main(){__
  string h,a,wh,card;
  map<string,map<int,string> >mapa;
  cin>>h>>a;
  int n,minu,play,actmin = 100; cin>>n;
  while(n--){
    cin>>minu>>wh>>play>>card;
    if((mapa[wh][play] == "y" or card == "r") and mapa[wh][play] != "r"){
      mapa[wh][play] = "r";
      if(wh == "h") cout<<h<<" ";
      else cout<<a<<" ";
      cout<<play<<" "<<minu<<endl;
    }else{
      if(mapa[wh][play] != "r") mapa[wh][play] = "y";
    }
  }
  return 0;
}
