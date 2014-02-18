#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,cont = 0;
  string p,s;
  bool ant = true;
  scanf("%i",&n);
  cin>>p>>s;
  for(int i = 0; i<n;i++){
    if(p[i] == s[i]){ 
      ant = true;
      continue;
    }
    if(ant){
      cont++;
      ant = false;
    }     
  }
  printf("%i\n", cont);
  return 0;
}