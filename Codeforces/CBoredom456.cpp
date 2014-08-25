#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

typedef map<int,int> mp;
typedef map<int,int>::iterator iter;

mp mapa;
mp act;

int rec(iter i,int pos){
  cout<<pos<<endl;
  int acum = 0;
  iter tmp = i;
  if(act[i->first] != 0) return act[i->first];
  if(pos > mapa.size()) return 0;
  acum+= i->first * i->second;
  cout<<"pos: "<<pos<<" ac: "<<acum<<" if "<<i->first<<" is "<<i->second<<endl;
  if( pos == mapa.size()) return acum; 
  tmp++;
  if(tmp->first == i->first +1) acum += max(rec(++tmp,pos+2),rec(++tmp,pos+3));
  else acum += max(rec(tmp,pos+1),rec(++tmp,pos+2));
  act[i->first] = acum;
  return acum;
}

int main(){
  //ios_base::sync_with_stdio(false);cin.tie(NULL);
  iter it = mapa.begin();
  //it++;
  int n,tmp;cin>>n;
  puts("b");
  for(int i = 0; i < n; i++){
    cin>>tmp;
    mapa[tmp]++;
  }
  puts("a");
  if(n > 1) it++;
  int ac = rec(mapa.begin(),0);
  //int ac2 = rec(it,1);
  cout<<ac<<endl;
  return 0;
}