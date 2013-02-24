#include<algorithm>
#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#include<set>

#define rep(i,men) for(int i=0 ; i < men ; i++) 

using namespace std;

int main(){
    int test,caso = 0;
    long in,raiz,inicio,final,dif,x,y;
    bool swaper;
    scanf("%i",&test);
    while(test--){
        scanf("%ld",&in);
        raiz = ceil(sqrt(in));
        swaper = (raiz % 2 == 0)? true : false;
        inicio = (raiz-1) * (raiz-1) + 1;
        final = raiz * raiz;
        dif = final - raiz + 1;
        if(dif-in > 0){
            x = raiz; 
            y = raiz - (dif - in);
        }else{
            y = raiz;
            x = raiz + (dif - in);
        }
        printf("Case %i: ",++caso);
        (!swaper)? printf("%ld %ld\n",x,y):printf("%ld %ld\n",y,x);
        
    }
    return 0;
}
