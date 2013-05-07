#include<cstdio>
#include<iostream>

using namespace std;

int main(){
    long val = 0,j,sod = 0,cont,sal;
    for(int i = 1; i <= 1000000 ; i++){
        j=i;
        cont = 0;
        sal = i;
        while(j > 1){
            if(j % 2 == 0){
                j/= 2;
                cont++;
            }else{
                j = (3 * j) +1;
                cont++;
            }
        }
        if (cont > val){
         val = cont;
         sod = sal;
        } 
    }
    printf("numero :%ld  cont : %i\n",sod,val);
    return 0;
}


