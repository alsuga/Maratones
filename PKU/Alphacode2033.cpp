#include <iostream>
#include <string>

using namespace std;

string in;
int memo[];

int partir(int donde){
  if(donde >= in.size())return 1;
  if(in[donde] == '0') return 0;
  if(memo[donde] > 0 ) return memo[donde];
  bool flag = false;
  int out = 0;
  if(donde+1 < in.size()) 
    if((in[donde] == '2' and in[donde+1] <= '6') or in[donde] == '1')flag = true;
  out = partir(donde+1);
  if(flag) out += partir(donde+2);
  memo[donde] = out;
  return out;
}


int main(){
  while(cin>>in and in != "0"){
    memset(memo,0,in.size());
    cout<<partir(0)<<endl;
  }
  return 0;
}
