#include <bits/stdc++.h>

using namespace std;

int reg[10], ram[1000];
int cont;

void ejecutar(int i){
  while(true){
    int x = ram[i]/100,d = (ram[i]/10) % 10 , a = ram[i] % 10 ;
    cont++;
    switch (x){
      case 0:
        if(reg[ a ] != 0)  i = reg[d] - 1;
        break;
      case 1:
        return;
        break;
      case 2:
        reg[d] = a;
        break;
      case 3:
        reg[d] = (reg[d] + a) % 1000; 
        break;
      case 4:
        reg[d] = (reg[d] * a) % 1000; 
        break;
      case 5:
        reg[d] = reg[a];
        break;
      case 6:
        reg[d] = (reg[d] + reg[a]) %1000;
        break;
      case 7:
        reg[d] = (reg[d] * reg[a]) %1000;
        break;
      case 8:
        reg[d] = ram[reg[a]];
        break;
      default:
        ram[reg[a]] = reg[d];
        break;
    }
    i++;
  }
}

int main(){
  int test, in;
  string num;
  scanf("%i\n\n",&test);
  while(test--){
    cont = 0;
    for (int i = 0; i < 10; ++i) reg[i]=0;
    for (int i = 0; i < 1000; ++i) ram[i]=0;
    int i = 0;
    while (getline(cin, num) && !num.empty()){
      in = atoi(num.c_str());
      ram[i] = in;
      i++;
    }
    cont = 0;
    ejecutar(0);
    printf("%i\n", cont);
    if(test) puts("");
  }
  return 0;
}