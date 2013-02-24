#include <cstdio>
#include <cmath>
#define pi acos(-1)
int main(){
    int casos=0,test,r1,r2,h,p;
    double out;
    scanf("%i", &test);while(test--){
        scanf("%i %i %i %i",&r1,&r2,&h,&p);
        out = pi * p * (((r1 - r2)*p/(double)h) *(( ((r1 - r2)*p/(double)h) / 3.0 ) + r2)+ (r2*r2));
        printf("Case %i: %.6f\n",++casos,out);
    }
    return 0;
}
