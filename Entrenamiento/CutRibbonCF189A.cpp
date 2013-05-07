#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
  int in[3],tmp,acum = 0,n,tmp2;
  bool flag = false;
  scanf("%i %i %i %i",&n,&in[0],&in[1],&in[2]);
  sort(in,in +3);
  for(int i = 0; i*in[2]<= n;i++){
    for(int j = 0; i*in[2] + j*in[1] <= n; j++){
      tmp = n - i*in[2] - j*in[1];
      if(tmp % in[0] == 0){
        tmp2 =  i + j + tmp / in[0];
        if(tmp2 > acum) acum = tmp2;
        continue;
      }
    }
  }
  printf("%i\n",acum);
  return 0;
}