#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  int arr[101],out[101];
  scanf("%i",&n);
  for(int i = 0; i<n ; i++){
    scanf("%i",&arr[i]);
    out[arr[i]-1] = i+1;
  }
  printf("%i",out[0]);
  for(int i = 1; i<n ; i++) printf(" %i",out[i]);
  puts("");
  return 0;
}