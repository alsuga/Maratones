#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<vector>
#include<cctype>
#include<algorithm>

using namespace std;

int main(){
  char entrada;
  bool flag = false;
  int cant=0,may=0;
  long acum = 0;
  vector<int> vec(100);
  while(true){
    int in=0;
    while(true){
      if(scanf("%c",&entrada) == -1){
        flag = true;   
        break;     
      }
      if(entrada == '\n')break;
      in ++;
    }
    vec[cant]= in;
    cant ++;
    if(flag)break;    
  }
  for(int i=0;i<cant;i++){
      if(vec[i]> may) may = vec[i]; 
  }
  for(int i=0;i<cant-1;i++){
      acum += (may - vec[i])*(may - vec[i]);
  }
  printf("%ld\n",acum);
  return 0;
}
