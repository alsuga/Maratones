#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	int lim = ((1001)*(1001) +1);
	long acum=1;
	for(int i = 6,j=5 ;i < lim ;){
		acum += i*4;
		j += 8;
		i += j;
	}

	cout<<"salida : "<< acum<<endl;
	/*int a,cres = 1, lim = ((1001)*(1001) +1);
	long acum = 0;
	for(int i = 1 ; i< lim; i+=2){
		acum += i*i;
	}
	for(int i = 1 ; i< lim; i+=2){
		acum += i*i + (i+1);
	}
	for(int i = 2 ; i< lim; i+=2){
		acum += i*i +1;
	}
	for(int i = 2 ; i< lim; i+=2){
		acum += i*i + (i + 2);
	}

	cout<<"salida : "<< acum<<endl;
	*/
	return 0;
}