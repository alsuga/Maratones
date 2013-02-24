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
    int caso=0,test,n,P,Q;
    scanf("%i",&test);
    while(test--){
       scanf("%i %i %i",&n,&P,&Q);
       int acum = 0,tmp,eggs = 0;
       while(n--){
           scanf("%i",&tmp);
           acum += tmp;
           if(acum <= Q &&eggs <P) eggs++;
       }
       printf("Case %i: %i\n",++caso,eggs); 
    }
    return 0;
}
