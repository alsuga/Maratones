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
      sieve[i*primos[j]] = j;
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  criba();
  int n; cin>>n;
  for(int i = 4; i < n; i++){
    if(primos[sieve[i]] != i and primos[sieve[n-i]] != n-i ){
      cout<<i<<" "<<n-i<<endl;
      break;
    }
  }
  return 0;
}