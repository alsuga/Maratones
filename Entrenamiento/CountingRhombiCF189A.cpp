#include <iostream>
#include <cstdio>

using namespace std;

int main(){
  int w,h,tw=0,th=0;
  long long int acum = 0;
  scanf("%i %i",&w,&h);
  for(int wh = 1; wh*2 <= w and wh*2 <= h; wh++){
    tw = w - (wh*2) +1;
    th = h - (wh * 2) + 1;
    acum += th * tw;
  }
  cout<<acum<<endl;
  return 0;
}