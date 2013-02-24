#include <string>
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
  string in("HI"),tmp,dos;
  char es;
  int test;
  unsigned f = in.find('g');
  while(cin>>in){
    es = in[4];
    scanf("%i",&test);
    while(test--){
      dos = in;
      cin>>tmp;
      cout<<tmp<<" is ";
      bool flag = true;
      unsigned f2 = tmp.find(es);
      if(f2 == f or tmp.length() < 4){
        puts("invalid");
        continue;
      }
      for(int i=0; i< tmp.size(); i++){
        unsigned found = dos.find(tmp[i]);
        if(found == f){
          flag = false;
          break;
        }
        dos.replace(found,1," ");
      }
      
      if(flag) puts("valid");
      else puts("invalid");
    }
  }
  return 0;
}