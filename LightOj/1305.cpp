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
    int test,Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,area,caso = 0;
    scanf("%i",&test);
    while(test--){
        scanf("%i %i %i %i %i %i", &Ax,&Ay,&Bx,&By,&Cx,&Cy);
        Dx = Cx - Bx + Ax;
        Dy = Cy - By + Ay;
        area = abs((Bx - Ax)*(Dy - Ay) - (By - Ay)*(Dx - Ax));
        printf("Case %i: %i %i %i\n",++caso,Dx,Dy,area);
    }
    return 0;
}
