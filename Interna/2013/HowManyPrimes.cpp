#include <bits/stdc++.h>

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

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    Criba();
    vector<int> vec(LIMITE +1 , 0);
    int in1,in2,out;
    for (int i = 1; i < LIMITE +1; ++i){
        vec[i] = vec[i-1];
        if(primos[criba[i]] == i) vec[i]++;
    }
    while(true){
        cin>>in1>>in2;
        if(in1+in2 == 0) break;
        out = vec[in2] - vec[in1];
        if(primos[criba[in1]] == in1) out++;
        cout<<out<<endl;
    }
    return 0;
}

