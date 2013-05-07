#include <cstdio>
#include <iostream>

using namespace std;

int main(){
  int n,m;
  scanf("%i %i",&n,&m);
  for(int i = 0; i<n+m;i++){
    if((n>0 and i%2 == 0) or m == 0) {
      puts("B");
      n--;
    }
    if((m>0 and i%2 != 0) or n == 0){
      puts("G");
      m--;
    }
  }
  puts("\n");
  return 0;
}