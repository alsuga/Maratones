#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;


map <int,int> mapa;

bool par(){
  for (map<int,int>::iterator i = mapa.begin(); i != mapa.end(); ++i) if(i->second % 2 == 1) return false;
  return true;
}

int main(){
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  vector <pair <int,int> > vec;
  int in,tmp;
  scanf("%i",&in);
  for (int i = 0; i < in*2; i++){
    scanf("%i",&tmp);
    mapa[tmp]++;
    vec.push_back(make_pair(tmp,i+1));
  }
  if(!par()) {
    puts("-1");
  }else{
    sort(vec.begin(),vec.end());
    for (int i = 0; i < vec.size(); i+=2){
      printf("%d %d\n",vec[i].second, vec[i+1].second);
    }
  }
  return 0;
}