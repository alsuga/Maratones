#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<vector>
#include<cctype>

using namespace std;

int main(){
  freopen("samp.in","r",stdin);
  char entrada;
  bool flag = false;
  string muestra = "problem";
  while(true){
    string in;
    while(true){
      if(scanf("%c",&entrada) == -1){
        flag = true;   
        break;     
      }
      if(entrada == '\n')break;
      in += entrada;
    }
    
    int pos = 0;                   
    for(int i = 0;i<in.size() && pos < 7;i++){
      if(tolower(in[i]) == muestra[pos])pos++;
      else pos = 0;     
    }
    if(pos == 7)printf("yes\n");
    else printf("no\n"); 
    if(flag)break;
  }
  return 0;    
}
