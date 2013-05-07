#include <iostream>
#include <cstdio>
#include <string>
 
using namespace std;
 
int main(){
    int test,casos = 0;
    char nada;
    scanf("%i",&test);
   
    while(test--){
        long otro,otro1,otro4,desde,hasta,fecha,dia;
        char mes[12];
        scanf("%s %i, %ld",&mes,&dia,&fecha);
        if ((fecha%4 == 0 or (fecha%100 == 0 and fecha%400 == 0) )and(mes[0] == 'F' or (mes[0] == 'J' and mes[1] == 'a'))) desde = fecha-1;
        else desde = fecha;
        scanf("%s %i, %ld",&mes,&dia,&fecha);
        if((mes[0] == 'F' and  dia < 29) or (mes[0] == 'J' and mes[1] == 'a')) hasta = fecha-1;
        else hasta = fecha;
        otro = hasta/4 - hasta/100 + hasta/400;
        otro1 = desde/4 - desde/100 + desde/400;
        otro4 = otro - otro1;
        printf("Case %i: %ld\n",++casos,otro4);
        }
    return 0;
}