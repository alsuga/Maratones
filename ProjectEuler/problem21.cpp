#include <iostream>
#include <cstdio>

using namespace std;

int divisores(int num){
	long ac=1;
	for(int i = 2; i <= num/2 ; i++){
		if(num % i == 0) ac += i;
	}
	return ac;
}

int main(){
	int vec[10001];
	for(int i=0;i<10000;i++){
		vec[i] = divisores(i+1);
	}
	cout<<"end"<<endl;
	long sal = 0;
	for(int i=0;i<10000;i++){
		for(int j=0; j<10000;j++){
			if((vec[i] == j+1 and vec[j] == i+1) and (i != j)) { 
				sal += vec[i];
				break;
			}
		}
	}
	cout<<"salida : "<<sal<<endl;
	return 0;
}