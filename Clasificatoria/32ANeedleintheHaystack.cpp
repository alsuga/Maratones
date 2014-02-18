#include <string>
#include <iostream>
#include <cstdio>

using namespace std;

int main(){
  string in, pat;
  int test;
  while(scanf("%i",&test) != EOF){
    cin>>pat>>in; 
    size_t pos = in.find(pat);
    if (pos != string::npos) printf("%i", pos);
    pos = in.find(pat, pos+1);
    while(pos != string::npos){
      printf("\n%i", pos);
      pos = in.find(pat,pos+1);
    }
    puts("");
  }
  return 0;
}