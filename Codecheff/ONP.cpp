#include <stack>
#include <string>
#include <cctype>
#include <cstdio>
#include <iostream>

using namespace std;

int main(){
  int test;
  string expr;
  scanf("%i",&test);
  while(test--){
    cin>>expr;
    string newexpr;
    stack<char> pila;
    for(int i=0; i<expr.size(); i++){
      if(expr[i] == '(') continue;
      if(isalpha(expr[i])) {
        newexpr += expr[i];
        continue;
      }
      if(expr[i] == ')'){
        newexpr += pila.top();
        pila.pop();
        continue;
      }
      pila.push(expr[i]);
    }
    cout<<newexpr<<endl;
  }
  return 0;
}