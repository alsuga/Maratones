#include <cstdio>
#include <iostream>

using namespace std;

unsigned long mod_pow(unsigned long a, unsigned long b, unsigned long c){
	unsigned long x = 1, y = a % c;
	while(b > 0){
		if (b % 2 == 1)	x = (x*y) % c;
		y = (y*y) % c;
		b >>= 1;
	}
	return x % c;
}

int main(){
	unsigned long ac = 0,tmp;
	for(int i=1; i < 1001; i++){
		tmp= mod_pow(i,i,100000000);
		cout<<tmp<<endl;
		ac += tmp;
	}
	cout<<"salida :"<<ac<<endl;
	return 0;
}