#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>


using namespace std;

const int LIMIT = 10000000;
int sieve[LIMIT + 1]; // Inicializar con 0’s.
int primes[LIMIT + 1];
int primeCount = 1;

int cambio(int in){
	int tmp = in % 10, lo;
	lo = ceil(log10(in));
	in /= 10;
	tmp = tmp * pow(10,lo - 1) + in;
	return tmp;
}

bool rotar(int i){
	int tmp = primes[i];
	while(true){
			int tem = cambio(tmp);
			if(primes[i] == tem) break;
			if(primes[sieve[tem]] != tem){
				return false;
			}
			tmp = tem;
		}
	cout<<primes[i]<<endl;
	return true;
}



int main(){
	for (int i = 0; i < LIMIT + 1; ++i)
	{
		sieve[i] = 0;
	}
	for (int i = 2; i <= LIMIT; ++i) {
		if (!sieve[i]) {
			primes[primeCount] = i;
			sieve[i] = primeCount;
			primeCount++;
		}

		for (int j = 1; j <= sieve[i] && i * primes[j] <= LIMIT; j++){
			sieve[ i * primes[j] ] = j;
		}
	}
	int cont = 0;
	for(int i=1; primes[i] < 1000000 ;i++){		
		if(rotar(i)) cont++;
	}
	cout<<"salida : "<<cont<<endl;
	return 0;
}
