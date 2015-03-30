#include <bits/stdc++.h>

#define __   ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

const int LIMITE = 1000002;
int criba[LIMITE +1];
int primos[LIMITE +1];

void Criba(){
    for (int i = 0; i < LIMITE +1; ++i) criba[i] = 0;
    int numPrimos = 1;
    for(int i = 2; i < LIMITE; i++){
        if(!criba[i]){
            primos[numPrimos] = i;
            criba[i] = numPrimos;
            numPrimos++;
        }
        for(int j = 1; j <= criba[i] and i*primos[j] <= LIMITE;j++)
            criba[i*primos[j]] = j;
    }
}

int main(){ __
  Criba();
  int n,k,cont = 0,tmp; cin>>n>>k;
  for(int i = 2; primos[i]+primos[i-1]+1 <= n; i++){
    tmp = primos[i]+primos[i-1]+1;
    if(primos[criba[tmp]] == tmp) cont++;
  }
  if(cont >= k) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  return 0;
}