#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
	int test,casos = 0;
	char nada;
	scanf("%i",&test);
	while(test--){
		int otro,otro1,otro4,desde,hasta,fecha;
		string mes,dia;
		cin>>mes>>dia>>fecha;
		if(mes[0] == 'F' or (mes[0] == 'J' and mes[1] == 'a')) desde = fecha;
		else desde = fecha+1;
		cin>>mes>>dia>>fecha;
		if((mes[0] == 'F' and dia[0] == '2' and dia[1] < '9') or (mes[0] == 'J' and mes[1] == 'a')) hasta = fecha-1;
		else hasta = fecha;
		otro = hasta/4 - desde /4 ;
		otro1 = hasta/100 - desde/100;
		otro4 = hasta/400 - desde/400;
		otro = otro - otro1 + otro4;
		if((desde %4 == 0 and desde % 100 != 0) or desde % 400 == 0) otro++;
		printf("Case %i: %i\n",++casos,otro);
	}
	return 0;
}

