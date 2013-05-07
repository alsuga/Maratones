#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

long te(long n){
  return (n*(n+1)) / 2;
}

int main(){
  int casos,ca = 0;
  long r,t,piso,techo,sol;
  scanf("%i",&casos);
  while(casos--){
    scanf("%ld %ld",&r,&t);
    r--;
    if(r & 1) {
      t += (r * (r + 1)) / 2 - 1 ;
      techo = sqrt(t * 2);
    }else{
      t += (r * (r + 1)) / 2 ;
      techo = sqrt((t+1) * 2);
    }
    if(te(techo) > t) techo--;
    techo--;
    cout<<techo<<endl;
    if(r & 1) sol = techo/2;
    else sol = (techo-1) /2;
    printf("Case #%i: %ld\n",++ca,sol);
  }
  return 0;
}