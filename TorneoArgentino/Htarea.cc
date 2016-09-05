#include <bits/stdc++.h>

using namespace std;

string n,m;


void cambiar(){
  m=n;
  sort(m.begin(),m.end());
}

void restar(){
  stringstream ss;
  int k,p;
  ss<<n;
  ss>>k;
  ss.clear();
  ss<<m;
  ss>>p;
  ss.clear();
  int resta=k-p;
  ss<<resta;
  ss>>n;
}

void start(){
   cin>>n;
   int pasos;
   for(pasos=1;;pasos++){
      cambiar();
      restar();
      if(n=="0") break;
   }
   cout<<pasos<<endl;
}


int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  start();
  return 0;
}
