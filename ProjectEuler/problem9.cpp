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

#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<b;i++)
#define REP(i,n) rep(i,0,n)
#define foreach(x, v) for (typeof (v).begin() x = (v).begin(); \
x != (v).end(); ++x)
#define D(x) cout << #x " = " << x << endl;

int main(){
    float tmp;
    REP(i,1000){
        rep(j,i+1,1000){
            tmp = sqrt(i*i + j*j);
            if((i + j + tmp) == 1000 && tmp > j ) printf("%i %i %f %f\n",i,j,tmp,i*j*tmp); 
        }
    }
    return 0;
}
