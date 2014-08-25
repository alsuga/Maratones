#include <bits/stdc++.h>

using namespace std;

int divisores(int n){
	int cont = 0;
	for(int i = 1; i*i <= n; i++){
		if(n%i == 0){
			cont++;
			if(i*i <n) cont++;
		}
	}
	return cont;
}

int main(){
  int test,in;
  scanf("%i",&test);
  int divi[2500];
  for(int i = 1; i<= 2500; i++){
  	divi[i-1] = divisores(i);
  }
  while(test--){
  	scanf("%i",&in);
  	int max = 0,act;
  	for(int i = 0; i<in; i++){
  		if(divi[i] > max){
  			max = divi[i];
  			act = i+1;
  		}
  	}
  	printf("%i\n", act);
  }
  return 0;
} 