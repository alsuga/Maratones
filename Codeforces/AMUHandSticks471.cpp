#include <bits/stdc++.h>

using namespace std;

int main(){
  int in[9],tmp,a=0,b=0; memset(in,0,sizeof(in));
  for(int i = 0; i < 6; i++){
    cin>>tmp;
    in[tmp-1]++;
  }
  bool el1 = false,el2=false;
  for(int i = 0; i < 9; i++){
    if(in[i] >= 4) el1 = true;
    if(in[i] == 2 or in[i] == 6) el2 = true;
    if(in[i] == 1) 
      if(a) b = i+1;
      else a = i+1;
  }
  if(!el1) cout<<"Alien"<<endl;
  else if(el2) cout<<"Elephant"<<endl;
          else cout<<"Bear"<<endl;

}