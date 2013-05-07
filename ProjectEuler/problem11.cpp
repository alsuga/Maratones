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

using namespace std;

int main(){
    freopen("in","r",stdin);
    long tmp = 0,tmp2;
    int in, mat[20][20];
    for(int i=0; i<20;i++){
        for(int j=0; j<20 ; j++){
            scanf("%i",&in);
            mat[i][j] = in;
        }
    }
    
    for(int i=0; i<20;i++){
        for(int j=0; j<17 ; j++){
            tmp2 = mat[i][j] * mat[i][j+1] * mat[i][j+2] * mat[i][j+3];
            if(tmp2 > tmp) tmp = tmp2;
        }
    }
    
    for(int j=0; j<20;j++){
        for(int i=0; i<17 ; i++){
            tmp2 = mat[i][j] * mat[i][j+1] * mat[i][j+2] * mat[i][j+3];
            if(tmp2 > tmp) tmp = tmp2;
        }
    }
    
    for(int i=0; i<17 ; i++){
        for(int j=0; j<17 ; j++){
            tmp2 = mat[i][j] * mat[i+1][j+1] * mat[i+2][j+2] * mat[i+3][j+3];
            if(tmp2 > tmp) tmp = tmp2;
        }
    }
    
    for(int i=3; i<20 ; i++){
        for(int j=0; j<17 ; j++){
            tmp2 = mat[i-3][j+3] * mat[i-2][j+2] * mat[i-1][j+1] * mat[i][j];
            //printf("%i %i %i %i\n",mat[i-3][j+3] , mat[i-2][j+2] , mat[i-1][j+1] , mat[i][j]);
            if(tmp2 > tmp) tmp = tmp2;
        }
    }
    
    printf("%ld\n",tmp);
    
    return 0;
}
