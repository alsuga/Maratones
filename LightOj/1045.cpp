#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
 
using namespace std;
 
int main(){
  int in,cas=0,n,base;
  long ac;
  double vec[1000001];
  scanf("%i",&in);
  vec[0]=0;
  for(int i=1;i<1000001;i++){
    vec[i] = log(i) + vec[i-1];
  }
  while(in--){
    scanf("%i %i",&n,&base);
    ac = (long)(vec[n]/log(base));
    printf ("Case %i: %ld\n",++cas,ac+1);
  }  
  return 0;
}

