#include <cstdio>
#include <iostream>
#include <string>
#include <map>

using namespace std;

int pal(int in){
  int t1 = in%10, r = in/10, out;
  out = t1*10 + r;
  return out;
}

int main(){
  int hora,minuto,cod=-1;
  char tmp;
  map<int,string> st;
  st[1] = "01:10";
  st[2] = "02:20"; 
  st[3] = "03:30";
  st[4] = "04:40";
  st[5] = "05:50";
  st[6] = "10:01";
  st[7] = "10:01";
  st[8] = "10:01";
  st[9] = "10:01";
  st[10] = "10:01";
  st[11] = "11:11";
  st[12] = "12:21";
  st[13] = "13:31";
  st[14] = "14:41";
  st[15] = "15:51";
  st[16] = "20:02";
  st[17] = "20:02";
  st[18] = "20:02";
  st[19] = "20:02"; 
  st[20] = "20:02";
  st[21] = "21:12";
  st[22] = "22:22";
  st[23] = "23:32";
  st[24] = "00:00";
  cin>>hora>>tmp>>minuto;
  if( minuto < pal(hora) ) cod = hora;
  else cod = hora+1;
  if((hora > 5 and hora < 10) or (hora == 5 and minuto < 50) or (hora==10 and minuto == 0)) cod = 6;
  if((hora >15 and hora < 20) or (hora == 15 and minuto < 51) or (hora==20 and minuto < 2)) cod = 16;
  cout<<st[cod]<<endl;
  return 0;
}