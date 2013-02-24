#include <cstdio>

int main(){
    int casos = 0, test;
    long tmp,n,m;
    scanf("%i",&test);
    while(test--){
        scanf("%ld %ld", &n, &m);
        tmp = (n/2) * m;
        printf("Case %i: %ld\n", ++casos, tmp);
    }
    return 0;
}
