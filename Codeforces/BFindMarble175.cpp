#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int vecg[10000];

int main(){
  int n,s,t,tmp,cont = 0;
  int vec[10000], vec1[10000];
  scanf("%i %i %i",&n,&s,&t);
  for(int i = 0; i<n;i++) {
    scanf("%i",&tmp);
    vec[i] = tmp-1;
    vec1[i] = i+1;
  }
  
  while(1){  
    if(vec1[t-1] == s) break;
    bool flag= true;
    for(int i = 0; i<n; i++){

            
      vecg[vec[i]] = vec1[i];

      if(vecg[i] != vec1[i]) flag = false;
      cont++;
    }
    printf("\n");
    if(flag or cont > 10){
      cont = -1;
      break;
    }
    for (int i = 0; i < n; ++i) vec1[i] = vecg[i];
  }

  printf("<--- %i\n",cont);
  return 0;
}