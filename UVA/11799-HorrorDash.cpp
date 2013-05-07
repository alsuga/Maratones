#include <cstdio>

int main(){
  int test,caso = 0,speed,students, mayor;
  scanf("%i", &test);
  while(test--){
    scanf("%i",&students);
    mayor = 0;
    while(students--){
      scanf("%i",&speed);
      if(speed > mayor) mayor = speed;
    }
    printf("Case %i: %i\n",++caso,mayor);
  }

  return 0;
}