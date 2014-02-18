#include <cmath>
#include <cctype>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#define LIMIT 2000

using namespace std;

vector<int> sieve(LIMIT+1,0);
int primes[LIMIT+1];
int primeCount = 1;

//-----

int val(string a){
  int minus = 'a'-1, mayus = 'A' - 27, acum = 0;
  for(int i = 0; i< a.size(); i++){
    acum += a[i] - ((islower(a[i]))? minus : mayus);
  }
  return acum;
}

void prime(){
  for(int i = 2; i <= LIMIT; i++){
    if(!sieve[i]){
      primes[primeCount] = i;
      sieve[i]= primeCount;
      primeCount++;
    }
    for(int j = 1; j<= sieve[i] && i*primes[j] <= LIMIT; j++)
      sieve[i * primes[j]] = j;
  }
}

int main(){
  string ch;
  int num;
  prime();
  while(cin>>ch){
    num = val(ch);
    if(num == 1 or num == primes[sieve[num]]) puts("It is a prime word.");
    else puts("It is not a prime word.");
  }
  return 0;
}