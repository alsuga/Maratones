#include <bits/stdc++.h>

using namespace std;

int main(){
  int test,pasos,a,b; scanf("%i",&test);
  vector<int> vec;
  while(test--){
    vec.clear();
    scanf("%i %i %i", &pasos,&a,&b);
    if(a > b) swap(a,b);
    for(int i = 0; i < pasos; i++){
      vec.push_back((pasos-1 - i) * a + (i * b));
    }
    printf("%i", vec[0] );
    for(int i = 1; i < vec.size(); i++){
      if(vec[i-1] == vec[i]) continue;
      printf(" %i", vec[i] );
    }
    puts("");
  }
  return 0;
}