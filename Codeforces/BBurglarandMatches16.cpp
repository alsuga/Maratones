#include <cstdio>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool men(pair<long,long> a, pair<long,long> b ){
  if(a.second > b.second)return true;
  return false;
} 

int main(){
  long tam,x,y,tmp1,tmp2,acum = 0,pos=0;
  vector<pair<long,long> > vec;
  scanf("%ld %ld",&x,&y);
  for(int i = 0; i < y ; i++ ){
    scanf("%ld %ld",&tmp1,&tmp2);
    vec.push_back(make_pair(tmp1,tmp2));
  }
  sort(vec.begin(), vec.end(),men);
  while(x){
    if(vec[pos].first == 0) pos++;
    if(pos == vec.size()) break;
    if(vec[pos].first <= x){
      x = x-vec[pos].first;
      acum += vec[pos].second * vec[pos].first;
      vec[pos].first = 0;
    }else{
      acum += vec[pos].second*x;
      x = 0;
    }
  }
  printf("%ld\n",acum);
  return 0;
}