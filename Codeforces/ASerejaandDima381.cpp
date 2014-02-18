#include <bits/stdc++.h>

using namespace std;

int max(int i, int j){
  if(i > j) return i;
  return j;
}

int main(){
  int in, num[1001],tmp;
  scanf("%i",&in);
  for(int i = 0; i < in; i++){
    scanf("%i",&tmp);
    num[i] = tmp;
  }
  int i = 0, j = in-1,serja=0,dima=0,sum;
  bool turn = true;
  while( num[i] > 0 or num[j] > 0 ){
    if(num[i] >= num[j]){ 
      sum = num[i];
      num[i] = 0;
      i++;
    }
    else{
      sum = num[j];
      num[j] = 0;
      j--;
    }
    if(turn) serja += sum;
    else dima += sum;
    turn = !turn;
  }
  printf("%i %i\n",serja,dima);
  return 0;
}