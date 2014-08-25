#include <bits/stdc++.h>

using namespace std;

int main(){
  int test;
  scanf("%i",&test);
  vector<int> vec(test);
  for(int i = 0; i<test ; i++) {
    scanf("%i",&vec[i]);
  }
  sort(vec.begin(), vec.end());
  for(int i = 0; i<test; i++){
    printf("%i\n",vec[i] );
  }
  return 0;
}