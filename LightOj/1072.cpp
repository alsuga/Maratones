#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>

#define pi acos(-1)

using namespace std;

int main(){
    int t,casos = 0;
    double R,n;
    scanf("%d",&t);

    while(t--){
        cin>>R>>n;
        printf("Case %i: %.10f\n",++casos,sin(pi/n)*R/(1+sin(pi/n)));
    }
    return 0;
}