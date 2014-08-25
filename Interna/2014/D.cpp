#include <bits/stdc++.h>

using namespace std;


int main(){
  int in;
  int vec[1000];
  for(int i = 0,j = 1; i<1000; i++){
    if(i%2 == 0) {
      vec[i] = 10000 - j;
    }
    else {
      vec[i] = j;
      j++;
    }
  }
  while(cin>>in){
  	for(int i = 0;  i<in-1; i++ ){
      printf("%i ",vec[i]);
    }
    printf("%i\n", vec[in-1]);
  }
  return 0;
} 