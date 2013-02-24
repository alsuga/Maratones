#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int trees,pos = 0, tim = 0,arbol,ant = 0,dif;
	scanf("%i",&trees);
	while(trees--){
		scanf("%i",&arbol);

		if(ant > arbol) dif = ant - arbol;
		else dif = arbol - ant;
		tim += dif;
		tim+= 2;
		ant = arbol;
	}
	printf("%i\n",tim-1);
	return 0;
}