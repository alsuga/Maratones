#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;


typedef pair<int, int> pii;

bool mayor(pii uno, pii dos){
  if((uno.first < dos.first) or ((uno.first == dos.first) and (uno.second < dos.second)))return true;

  return false;
}


int main(){
  vector<pii> vec;
  pii tmp;
  int num,cont =0;
  scanf("%i", &num);
  while(num--){
    cin>>tmp.first>>tmp.second;
    vec.push_back(tmp);
  }
  sort(vec.begin(), vec.end(),mayor);
  for (int i = 0; i < vec.size(); i++){
    for(int j=0; j< vec.size(); j++){
      if(vec[i].first == vec[j].second and i != j ) cont++;
    }
  }
  printf("%i\n",cont);
  return 0;
}