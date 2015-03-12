#include <bits/stdc++.h>

using namespace std;

map<string,int> mapa;

int dist(string a, string b){
  int c,d;
  if(mapa[a] < mapa[b]) {
    c = mapa[b] - mapa[a];
    d =12 - (mapa[b] - mapa[a]);
  } else{
    c = mapa[a] - mapa[b];
    d =12 - (mapa[a] - mapa[b]);
  }
  if(c == 4 or c == 3 or c == 7) return c;
  if(d == 4 or d == 3 or d == 7) return d;
  return c;
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  mapa["C"] = 0;
  mapa["C#"] = 1;
  mapa["D"] = 2;
  mapa["D#"] = 3;
  mapa["E"] = 4;
  mapa["F"] = 5;
  mapa["F#"] = 6;
  mapa["G"] = 7;
  mapa["G#"] = 8;
  mapa["A"] = 9;
  mapa["B"] = 10;
  mapa["H"] = 11;
  
  vector<string> vec(3);

  cin>>vec[0]>>vec[1]>>vec[2];

  int a,b,c;
  a = dist(vec[0],vec[1]);
  b = dist(vec[2],vec[1]);
  c = dist(vec[2],vec[0]);
  if(a == 4 and ((b == 3 and c == 7) or (b == 7 and c == 3))) cout<<"major"<<endl;
  else if(a == 3 and ((b == 4 and c == 7) or (b == 7 and c == 4))) cout<<"minor"<<endl;
    else cout<<"strange"<<endl;
  return 0;
}