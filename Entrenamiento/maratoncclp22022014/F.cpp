#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, cont;
  int vec[1000];
  while(cin>>n){
    for(int i = 0; i<n; i++){
      scanf("%i", &vec[i]);
    }
    bool flag = true;
    cont = 0;
    while(flag){
      flag = false;
      for(int i = 1; i < n; i++){
        if(vec[i-1] > vec[i]) {
          swap(vec[i-1], vec[i]);
          flag = true;
          cont++;
        }    
      }
    }
    printf("Minimum exchange operations : %i\n", cont);    
  }
}
