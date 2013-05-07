#include <iostream>
#include <cstdio>

using namespace std;

int p(int i){
	return i*i*i*i*i;
}
long sum(int i){
	long sal = 0;
	while(i > 0){
		sal += p(i%10);
		i/= 10;
	}
	return sal;
}

int main(){
	long acum = 0;
	for(long i=0;i<=100000000;i++){
		if(i == sum(i)) {
			acum += i;
			cout<<i<<endl;
		}
	}
	acum -=1;
	cout<<"salida: "<<acum<<endl;
	return 0;
}