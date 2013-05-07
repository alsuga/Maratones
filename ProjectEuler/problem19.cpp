#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int dia = 4,cont = 0,ac;
	for(int j=1; j< 8; j++){
		dia = j;
		for(int an = 1901; an < 2001; an++){
			if(dia == 7)cont++;
			if(an % 4 == 0) ac = 2;
			else ac = 1;
			if(dia + ac > 7) dia = dia - 7;
			dia += ac;
		}
		cout<<endl<<j<<"  "<<cont<<endl;
		cont = 0;
	}
	return 0;
}