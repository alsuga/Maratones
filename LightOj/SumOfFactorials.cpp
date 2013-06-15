#include <iostream>
#include <cstdio>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;

vector<long long int> vec(20);

int main(){
  int casos = 0,test;
vec[0] = 1;
vec[1] = 1;
vec[2] = 2;
vec[3] = 6;
vec[4] = 24;
vec[5] = 120;
vec[6] = 720;
vec[7] = 5040;
vec[8] = 40320;
vec[9] = 362880;
vec[10] = 3628800;
vec[11] = 39916800;
vec[12] = 479001600;

long long int tmp,in;
for(int i = 13; i<20; i++){
    vec[i] = vec[i-1] * i;
  }
  scanf("%i",&test);
  while(test--){
    stack<int> st;
    scanf("%lld",&in);
    tmp = 0;
    for(int i = 19; i>= 0; i--){
      if(vec[i] <= in - tmp) {
        tmp += vec[i];
        st.push(i);
        if(tmp == in) break;
      }
    }
    printf("Case %i: ",++casos);
    if(tmp != in and in!= 0) printf("impossible\n");
    else{
      printf("%i!",st.top());
      st.pop();
      while(!st.empty()){
        printf("+%i!",st.top());
        st.pop();
      }
      puts("");
    }
  }
  
  return 0;  
}
