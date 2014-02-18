#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int a,tmp;
  double out;
  vector<long> vec(10e5 + 10);
  while(true){
    scanf("%i",&a);
    if(a == 0) break;
    for (int i = 0; i < a; ++i){
      scanf("%i",&tmp);
      vec[i] = tmp;
    }
    sort(vec.begin(),vec.begin()+a);
    if(a%2 == 1) out = vec[a/2];
    else out = (vec[a/2] + vec[a/2 - 1] ) / 2.0;
    printf("%.1lf\n",out);
  }
  return 0;
}