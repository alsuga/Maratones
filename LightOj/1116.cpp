#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int test, casos = 0;
    long M,W;
    
    scanf("%i",&test);
    while(test--){
        scanf("%ld",&W);
        M = 1;
        printf("Case %i: ",++casos);
        if(W & 1){
            printf("Impossible\n");
            continue;
        }
        while((W & 1) == 0){
            W = W >> 1;
            M = M << 1;
        }
        printf("%ld %ld\n", W , M);
    }
    return 0;
}
