#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
  int in, sevens, fours;
  string out;
  scanf("%d",&in);
  while(in > 0){
    if(in-7 % 4){
      sevens = in/7;
      in -= in/7 * 7;
    }else{
      if(in - 4 ){
        fours = in/4 + 4;
        in -= in/4 * 4 + 4;
      }
      else break;
    }
  }

  if(in == 0){
    while(sevens > 0 or fours > 0){
      if(fours > 0){
        out += "4";
        fours--;
      }else{
        out += "7";
        sevens--;
      }
    }
    puts(out.c_str());
  }
  else puts("-1");
  return 0;
}