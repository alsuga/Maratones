#include <bits/stdc++.h>

using namespace std;
int LIMIT= 1000000;
int cont= 1;
vector<int> sieve(LIMIT+1,0);
vector<int> primos(LIMIT+1);

void criba(){
  for (int i = 2; i <= LIMIT; ++i){
    if(!sieve[i]){
      primos[cont] = i;
      sieve[i] = cont;
      cont++;
    }
    for (int j = 1; j <= sieve[i] && i*primos[j] <= LIMIT; j++){
      sieve[i*primos[j]]++;
    }
  }
}

/*int LIMIT= 1000000;
int cont= 1;
vector<int> sieve(LIMIT+1,0);
vector<int> primos(LIMIT+1);

void criba(){
  for (int i = 2; i <= LIMIT; ++i){
    if(!sieve[i]){
      primos[cont] = i;
      sieve[i] = cont;
      cont++;
    }
    for (int j = 1; j <= sieve[i] && i*primos[j] <= LIMIT; j++){
      sieve[i*primos[j]] = j;
    }
  }
}

int divisores(int n){
	int cont = 1;
	int tmp;
	for(int i = 1; primos[i]*primos[i] <= n; i++){
		if(n%primos[i] == 0){
			cont++;
			tmp = primos[i];
			while(tmp*primos[i] <n) {
				tmp*=primos[i];
				cont++;
			}
		}
	}
	return cont;
}

int main(){
  int test,in;
  criba();
  scanf("%i",&test);
  int divi[100];
  for(int i = 1; i<= 100; i++){
  	divi[i-1] = divisores(i);
  }
  while(test--){
  	scanf("%i",&in);
  	int max = 0,act = 0;
  	for(int i = 0; i<in; i++){
  		if(divi[i] > max){
  			max = divi[i];
  			act = i+1;
  		}
  	}
  	printf("%i\n", act);
  }
  return 0;
}*/