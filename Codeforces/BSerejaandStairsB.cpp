#include <bits/stdc++.h>

using namespace std;

int main(){
  int test,in;
  scanf("%i",&test);
  vector<int> vec;
  for(int i = 0; i< test; i++){
    scanf("%i",&in);
    vec.push_back(in);
  }
  sort(vec.begin(), vec.end());
  int mitad = vec[vec.size()-1];
  stack <int> st;
  queue<int> que;
  for(int i = 0; i<vec.size()-1;i++){
    if (vec[i] == mitad) {
      test--;
      continue;
    }
    if(que.empty()){
      que.push(vec[i]);
    }
    else{
      if(vec[i] != que.back()) que.push(vec[i]);
      else{
        if(st.empty()){
          st.push(vec[i]);
        }else{
          if(vec[i] == st.top()){
            test--;
            continue;
          }
          else st.push(vec[i]);
        }
      }
    }
  }
  que.push(mitad);
  bool espacio = false;
  printf("%i\n",test);
  while(!que.empty()){
    if(espacio) printf(" ");
    printf("%i", que.front());
    espacio = true;
    que.pop();
  }
  while(!st.empty()){
    if(espacio)printf(" ");
    printf("%i", st.top());
    espacio = true;
    st.pop();
  }
  puts("");
  return 0;
}