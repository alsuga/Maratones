#include <bits/stdc++.h>

using namespace std;

int main(){
  int test, out;
  scanf("%i", &test);
  string in;
  while(test--){
    out = 0;
    cin>>in;
    for(int i = 0; i < in.size()/2; i++){
      out += fabs(in[i] - in[in.size() - i - 1] );
    }
    printf("%i\n", out);
  }
  return 0;
}