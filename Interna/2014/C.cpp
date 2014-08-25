#include <bits/stdc++.h>

using namespace std;
int LIMIT= 398;
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
  for(int i = 0; i<LIMIT; i++) cout<<primos[i]<<endl;
}

int main(){
  int test,in;
  scanf("%i",&test);
  criba();
  while(test--){
    int act =0;
  	scanf("%i",&in);
    for(int i = 0; primos[i] < in ; i++){
      for(int j = i; primos[j] < in ; j++){
        if(primos[i] + primos[j] == in) {
          act++;
        }
      }
    }
    printf("%i\n", act);
  }
  return 0;
} 