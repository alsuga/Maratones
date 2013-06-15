#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int soldiers,tmp,men,p1,p2;
  vector<int> stat;
  scanf("%i",&soldiers);
  for(int i= 0; i<soldiers;i++){
    scanf("%i",&tmp);
    stat.push_back(tmp);
  }
  men = fabs(stat[0] - stat[1]);
  p1 = 1;
  p2 = 2;
  for(int i = 1; i<soldiers; i++){
    if(fabs(stat[i] - stat[(i+1) % soldiers]) < men){
      men  = fabs(stat[i+1] - stat[i]);
      p1 = i+1;
      p2  = ((i+1) %soldiers)+1;
    }
  }
  printf("%i %i\n", p1,p2);
  return 0;
}