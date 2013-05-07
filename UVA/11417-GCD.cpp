#include <cstdio>

int gcd(int a,int b){
  int tmp;
  while(b){
    a %= b;
    tmp = a;
    a = b;
    b = tmp;
  }
  return a;
}

int main(){
  int n;
  while(true){
    int G = 0;
    scanf("%i",&n);
    if(n == 0) break;
    for (int i = 1; i < n; i++){
      for(int j = i+1; j <= n; j++){
        G+= gcd(i,j);
      }
    }
    printf("%i\n",G);
  }
  return 0;
}