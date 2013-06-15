#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  string uno,dos,tmp;
  cin>>uno>>dos;
  sort(dos.begin(),dos.end());
  int curpos = dos.size()-1;
  for(int i = 0; i<uno.size(); i++){
    if(curpos < 0)tmp += uno[i];
    else{
      if(uno[i]< dos[curpos]){
        tmp += dos[curpos];
        curpos--;
      }
      else tmp += uno[i];
    }
  }
  cout<<tmp<<endl;
  return 0;
}