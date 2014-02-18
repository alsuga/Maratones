#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int test,in;
  scanf("%i",&test);
  vector<int> vec;
  while(test--){
    scanf("%i",&in);
    vec.push_back(in);
  }
  sort(vec.begin(), vec.end());
  for (int i = 0; i < vec.size(); ++i) printf("%i\n", vec[i]);
  return 0;
}