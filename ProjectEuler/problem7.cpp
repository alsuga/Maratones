#include <cstdio>
#include <cmath>
#include <functional>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <map>

/**
* Para usar, primero llamar la funcion que llena la criba.
* Num::primeSieve();
* luego en Num::primes queda el vector con todos los primos
*/
using namespace std;

typedef long long   lli;
typedef vector<int> IV;
 
#define Sc(t,v) static_cast<t>(v)
#define cFor(t,v,c)  for(t::const_iterator v=c.begin(); \
v != c.end(); v++)

#define ISCOMP(n)  (_c[(n)>>5]&(1<<((n)&31)))
#define SETCOMP(n) _c[(n)>>5]|=(1<<((n)&31))
namespace Num{
  const int MAX = 1000000;  // sqrt(10^12)
  const int LMT = 1000;   // sqrt(MAX)
  int _c[(MAX>>5)+1];
  IV primes;
  void primeSieve() {
    SETCOMP(0); SETCOMP(1);
    for (int i = 3; i <= LMT; i += 2)
      if (!ISCOMP(i)) 
        for (int j = i*i; j <= MAX; j+=i+i) SETCOMP(j);
    primes.push_back(2);
    for (int i=3; i <= MAX; i+=2) 
	  if (!ISCOMP(i)) primes.push_back(i);
  }
}
//Ejemplo
int main(){
  Num::primeSieve();
  using Num::primes;
  // se usa como primes[i] para el iesimo primo
  printf("%ld\n", Num::primes[10000]);
  return 0;
}
