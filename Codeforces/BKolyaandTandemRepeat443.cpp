#include <bits/stdc++.h>

using namespace std;

int main(){
  string in;
  int added, med,mov = 0,out,size;
  bool flag = false;
  cin>>in>>added;
  mov= (in.size()%2);
  if(added >= in.size()-mov){
    out = added+in.size();
    if(out%2) out--;
    printf("%i\n", out);
    return 0;
  }

  med = in.size()/2;
  med += in.size()%2;
  while(med < in.size() -1 and !flag){
    flag = true;
    for(int i = 0; i+med < in.size(); i++){
      if(in[med + i] != in[mov+i]){
        flag = false; 
        break;
      }
    }
    med++;
    mov+=2;
  }

  out = med*2;
  mov= (in.size()%2);

  med = (in.size()+added) / 2;
  med += med%2;
  flag = false;
  while(med < in.size()-1 and !flag) {
    flag = true;
    for(int i = 0; i+med < in.size(); i++){
      if(in[med + i] != in[mov+i]){
        flag = false; 
        break;
      }
    }
    cout<<"---"<<endl;
    med++;
    mov+=2;
  }
  med--;
  cout<<flag<<" size "<<(in.size())<<" ad : "<<added<<" med :"<<med<<endl;
  if(out < ((in.size() + added - med) * 2) ) out = (in.size() + added - med) * 2;
  printf("%i\n", out);

  return 0;
}