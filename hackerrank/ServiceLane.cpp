#include <bits/stdc++.h>

using namespace std;

int main(){
  int n,t, in, x,y;
  scanf("%i %i", &n, &t);
  int street[100000];
  for (int i = 0; i < n; ++i){
    scanf("%i",&street[i]);
  }
  while(t--) {
    scanf("%i %i",&x,&y);
    int min = 4;
    for (int i = x; i <= y; ++i){
      if(street[i] < min) min = street[i];
    }
    printf("%i\n", min);
  }
  return 0;
}