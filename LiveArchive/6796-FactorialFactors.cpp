#include <bits/stdc++.h>

using namespace std;

int LIMIT= 100002;
int cont= 1;

vector<int> sieve(LIMIT+1,0);
vector<int> primos(LIMIT+1);
vector<int> divs(LIMIT+1,-1);

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

int calcfact(int in){
  if(divs[in] >= 0) return divs[in];
  int cont = 0;
  while(in > 1){
    in /= primos[sieve[in]];
    cont++;
  }
  divs[in] = cont;
  return cont;
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int test; cin>>test;
  criba();
  while(test--){
    int in; cin>>in;
    int prim = 0,fact = 0;
    for(int i = 2; i <= in; i++){
      if(primos[sieve[i]] == i) prim++;
      fact += calcfact(i);
    }
    cout<<prim<<" "<<fact<<endl;
  }
  return 0;
}


