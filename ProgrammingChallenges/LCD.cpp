#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

char  numeros1[][4] =  {"   ", " - ", " - ", "   ", " - ", " - ", " - ", " - ", " - ", " - "};
char  numeros2[][4] =  {"  |", "  |", "  |", "| |", "|  ", "|  ", "  |", "| |", "| |", "| |"};
char  numeros3[][4] =  {"   ", " - ", " - ", " - ", " - ", " - ", "   ", " - ", " - ", "   "};
char  numeros4[][4] =  {"  |", "|  ", "  |", "  |", "  |", "| |", "  |", "| |", "  |", "| |"};
char  numeros5[][4] =  {"   ", " - ", " - ", "   ", " - ", " - ", "   ", " - ", " - ", " - "};

char cual(int i, int e,int p){
  switch (e){
    case 0:
      return numeros1[(i-1+10)%10][p];
      break;
    case 1:
      return numeros2[(i-1+10)%10][p];
      break;
    case 2:
      return numeros3[(i-1+10)%10][p];
      break;
    case 3:
      return numeros4[(i-1+10)%10][p];
      break;
    default:
      return numeros5[(i-1+10)%10][p];
  }
}

void draw(int i,int e,int cant){
  printf("%c", cual(i,e,0));
  for (int j = 0; j < cant; ++j){
    printf("%c", cual(i,e,1));
  }
  printf("%c", cual(i,e,2));
}

int main(){
  long cant;
  int max;
  string num;
  while(true){
    scanf("%ld",&cant);
    cin>>num;
    if(cant == 0 and num == "0") break;
    for(int e = 0; e< 5; e++){
      max = 1;
      if(e%2 == 1) max = cant;
      for(int j = 0; j<max;j++){
        for(int i = 0; i<num.size();i++){
          draw(num[i]-'0',e,cant);
          if(i+1 < num.size()) printf(" ");
        }
        printf("\n");
      }
    }
    printf("\n");
  }
  return 0;
}