#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

double distancia(int xas,int yas, int xnav, int ynav, int radio){
  double sol;
  sol = sqrt( (xas - xnav)*(xas - xnav) +  (yas - ynav)*(yas - ynav)) -radio ;
  return sol;
}

int main(){
  int num,xas,yas,xnav,ynav,radio, solucion;
  double dist,tmp;
  while(true){
    scanf("%i", &num);
    if(num == 0)break;
    scanf("%i %i",&xnav,&ynav);
    int asteroide = 0;
    double mayor=0.0;
    while(num--){
      asteroide++;
      scanf("%i %i %i",&xas, &yas, &radio);
      tmp = distancia(xas,yas,xnav,ynav,radio);
      if(mayor == 0 or mayor > tmp){
        mayor = tmp;
        solucion = asteroide;
      }
    }
    printf("%i\n",solucion);
  }
  return 0;
}
