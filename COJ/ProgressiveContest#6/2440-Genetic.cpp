#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
  int test;
  scanf("%i",&test);
  string a,b,c = "T";
  while(test--){
    cin>>a>>b;
    size_t found = a.find(b);
    if(a.find(b) != string::npos and a.find(c)!= string::npos) puts("Y");
    else puts("N");
  }
  return 0;
}