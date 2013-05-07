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
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define rep(i,n) REP(i,0,n)
#define foreach(x, v) for (typeof (v).begin() x = (v).begin(); \
x != (v).end(); ++x)
#define D(x) cout << #x " = " << x << endl;

typedef long long int lld;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;


int main(){
  
  int cont;
  long tmp,tmp1,tmp2=0;
  REP(i,9999,50000){
    tmp = (i * (i+1) )/2;
    //printf("HOLA %ld\n",tmp);
    cont = 1;
    tmp1 = sqrt(tmp);
    REP(j,1,tmp1){
        if(tmp % j == 0)cont+=2;
    }
    //if(tmp1 - sqrt(tmp) == 0) cont--;
    //if(cont > tmp2) tmp2 = cont;
    if(cont > 500) {
        printf("este %ld\n", tmp);
        break;
    }
  }
  //printf("%ld %ld\n",tmp,tmp2);
  
  return 0;
}
