#include <cstdio>
#include <iostream>

using namespace std;

int main(){
	int n;
	int primes[16] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};
	long mult;
	while(true){
		scanf("%i",&n);
		if(n == 0) break;
    mult = 1;
		for (int i = 0; primes[i] <= n; ++i){
      mult *= primes[i];
		}
    printf("%ld\n", mult);
	}
	return 0;
}