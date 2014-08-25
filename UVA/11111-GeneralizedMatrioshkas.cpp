#include <bits/stdc++.h>
using namespace std;

int main(){
  string in;
  int tmp;
  pair<int,int> calculo;
  while(getline(cin, in)) {
      istringstream is(in);
      stack<pair<int,int> > st;
      bool flag = true;
      while(is>>tmp){
        if(tmp < 0 and st.empty()) {
          st.push(make_pair(tmp,tmp*-1));
          
          continue;
        }
        if(tmp > 0 and st.empty()){
          flag = false;
          break;
        }
        if(st.top().first + tmp == 0) {
          
          st.pop();
          if(st.empty()) break;
          calculo = st.top();
          
          calculo.second -= tmp;
          if(calculo.second <= 0){
            flag = false;
            break;
          }
          
          st.pop();
          st.push(calculo);
          
          continue;
        }
        if(st.top().first > tmp and tmp < 0){
          flag = false;
          break;
        }
        st.push(make_pair(tmp,tmp*-1));
        
      }
      if(flag and st.empty()) puts(":-) Matrioshka!");
      else puts(":-( Try again.");
  }
  return 0;
}