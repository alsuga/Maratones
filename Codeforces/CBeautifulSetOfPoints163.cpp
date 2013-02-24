#include <cmath>
#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

struct point
{
  int x;
  int y;

  point(){}
  point(int x_, int y_):x (x_), y (y_){}
  double dist (const point & other){
    int a = x - other.x;
    int b = y - other.y;
    return sqrt(a*a + b*b);
  }
};

int main(){
  int n,m;
  point tmp;
  vector<point> v;
  scanf("%i %i",&n,&m);
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
      tmp = point(i,j);
      v.push_back(tmp);
    }
  }
  return 0;
}