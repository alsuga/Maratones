#include <bits/stdc++.h>

using namespace std;

int main(){
  int can, pet,tmp,q;
  bool flag;
  vector<long long> vec(100000,0);
  while(cin>>can){
    scanf("%i",&pet);
    scanf("%i",&tmp);
    vec[0] = tmp;
    for(int i = 1; i<can; i++){
      scanf("%i",&tmp);
      vec[i] += tmp;
    }
    while(pet--){
      flag = true;
      scanf("%i",&q);
      for(int i = can-1; i>0; i--){
        if(vec[i] >= q ) continue;
        flag = false;
        printf("%i", i);
        break;
      } 
      if(flag) printf("1"); 
      if(pet == 0) puts("");
      else printf(" ");
    }
  }
	return 0;
}