#include <cstdio>
#include <iostream>
#include <vector> 

using namespace std;

const int LIMIT = 10e6;
int sieve[LIMIT +1];
int primes[LIMIT +1];

int main(){
  for (int i = 0; i < LIMIT +1; ++i) sieve[i] = 0;
  int primeCount = 1;
  for (int i = 2; i < LIMIT; ++i){
    if(!sieve[i]){
      primes[primeCount] = i;
      sieve[i] = primeCount;
      primeCount++;
    }
    for (int j = 1; j <= sieve[i] and i*primes[j] <= LIMIT; ++j){
      sieve[i * primes[j]] = j;
    }
  }
  vector<int> vec(LIMIT +1 , 0);
  for (int i = 1; i < LIMIT +1; ++i){
    vec[i] = vec[i-1];
    if(primes[sieve[i]] == i) vec[i]++;
  }
  int a,b,num1,num2;
  while(true){
    scanf("%i %i",&a,&b);
    if(a +b == 0) break;
    num1 = vec[a];
    num2 = vec[b];
    if(primes[sieve[a]] == a) num1--;
    printf("%i\n", num2 - num1);
  }
  return 0;
}
