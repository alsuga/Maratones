#include <cstdio>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

struct point {
  double x,y;
  point(){}
  point(double x_, double y_): x (x_), y (y_){}

  double dist (const point & other){
    double a = x - other.x;
    double b = y - other.y;
    return sqrt(a * a - b * b);
  }
};

int main(){
  int test,out;
  scanf("%i",&test);
  for (int caso = 0; caso < test; caso++){
    int num,dist;
    out = 0;
    double D, t1,t2;
    scanf("%i %lf",&num,&D);
    dist = D * 100;
    vector<point> puntos (num);
    vector<bool> visitados (num,false);
    for (int i = 0; i < num; ++i){
      scanf("%lf %lf", &t1,&t2);
      point  tmp(t1,t2);
      puntos[i] = tmp;
    }

    for (int i = 0; i < num; ++i){
      //if(visitados[i]) continue;
      //else out++;
      visitados[i] = true;
      for (int j = i+1; j < num; j++){
        cout<<i<<" -> "<<j<<" "<<int(puntos[i].dist(puntos[j]) * 100)<<" "<<puntos[i].dist(puntos[j])<<" dist "<<dist<<" "<<D<<endl;
        if(int(puntos[i].dist(puntos[j]) * 100) <= dist) visitados[j] = true;
      }
    }
    printf("Case %i: %i\n",caso+1,out);
  }
  return 0;
}