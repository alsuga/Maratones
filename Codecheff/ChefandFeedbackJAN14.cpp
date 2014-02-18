#include <bits/stdc++.h>

using namespace std;

int main(){
  int test;
  string in;
  scanf("%i", &test);
  while(test--){
    cin>>in;
    if( in.find("101") != string::npos or in.find("010") != string::npos) puts("Good");
    else puts("Bad");
  }
  return 0;
}