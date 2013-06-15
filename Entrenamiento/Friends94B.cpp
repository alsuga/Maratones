#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int,int> par;

int main(){
  par tmp;
  int num,t1,t2,si = 0, no = 0;
  vector<par> gente;
  scanf("%i",&num);
  while(num--){
    scanf("%i %i",&t1,&t2);
    gente.push_back(((t1 < t2)? make_pair(t1,t2) : make_pair(t2,t1)));
  }
  sort(gente.begin(), gente.end());
  for(int i = 1; i<5;i++){
    for(int j = i+1; j<6 ;j++){
      if(binary_search(gente.begin(), gente.end(), make_pair(i,j))) si++;
      else no++;
    }
  }
  if(si == 6 or no == 6) puts("WIN");
  else puts("FAIL");
  return 0;
}