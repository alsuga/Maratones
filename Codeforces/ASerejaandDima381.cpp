#include <bits/stdc++.h>

using namespace std;

int main(){
  int in, num[1001],tmp;
  scanf("%i",&in);
  for(int i = 0; i < in; i++){
    scanf("%i",&tmp);
    num[i] = tmp;
  }
  int i = 0, j = in-1,sd[2]={0,0}, turn = 0;
  while( i <= j ){
    if(num[i] >= num[j]){ 
      sd[turn] += num[i];
      i++;
    }
    else{
      sd[turn] += num[j];
      j--;
    }
    turn = 1 - turn;
  }
  printf("%i %i\n",sd[0],sd[1]);
  return 0;
}