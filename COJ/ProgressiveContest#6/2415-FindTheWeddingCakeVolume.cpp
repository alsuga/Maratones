#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

const double pi = acos(-1);

int main(){
  int test, cakes,r,h;
  double vol;
  scanf("%i",&test);
  while(test--){
    vol = 0;
    scanf("%i",&cakes);
    while(cakes--){
      scanf("%i %i", &r,&h);
      vol += pi * (r*r * h);
    }
    printf("%.2lf\n", vol);
  }
  return 0;
}