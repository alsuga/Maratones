#include <bits/stdc++.h>

using namespace std;

int main(){
  int test, in;
  scanf("%i", &test);
  while(test--){
    int out,ac = 0;
    scanf("%i", &in);
    if(in % 2){
      in++;
      ac++;
    }
    out = 1<<(in/2) + 1;
    out -= 1+ac;
    printf("%i\n", out);
  }
  return 0;
}
