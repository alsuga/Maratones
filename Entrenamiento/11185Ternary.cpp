#include <cmath>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

string change(int num){
  string act,pas;
  while(num){
    act = ((char)((num%3) + '0'));
    num /= 3;
    act += pas;
    pas = act;
  }

  return act;
}

int main(){
  long num;
  while(true){
    scanf("%ld", &num);
    if(num == -1) break;
    cout<<change(num)<<endl;
  }
  return 0;
}