#include <iostream>
#include <cstdio>

using namespace std;

int main(){
  double vec[1000];
  long students;
  double tmp,tmp2;
  while(true){
    scanf("%ld",&students);
    if(students == 0) break;
    double prom = 0,up=0,down=0;
    for (int i = 0; i < students; ++i){
      scanf("%lf",&tmp);
      vec[i] = tmp;
      prom += vec[i];
    }
    prom = prom/students;
    for (int i = 0; i < students; ++i){
      if(vec[i]>prom) up += (double)((int)((vec[i] - prom)*100)/100.0);
      else down += (double)((int)((prom - vec[i])*100)/100.0);
    }
    if(up > down) printf("$%.2lf\n", up);
    else printf("$%.2lf\n", down);
  }
  return 0;
}