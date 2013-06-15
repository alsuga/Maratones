#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

#define s speed
#define r ram
#define h hdd 
#define c cost

using namespace std;

struct par{
  int speed,ram ,hdd,cost,pos;
};

par assign(par a, int s,int r, int h, int c, int p){
  a.s = s;
  a.r = r;
  a.h = h;
  a.c = c;
  a.pos = p;
  return a;
}

bool ord(par a, par b){
  if(a.c < b.c) return true;
  return false;
}


int main(){
  int test,speed,ram,hdd,cost;
  scanf("%i",&test);
  vector<par> vec;
  string name, type;
  par tmp;
  for (int i = 0; i < test; ++i){
    scanf("%i %i %i %i",&speed,&ram,&hdd,&cost);
    par tmp;
    tmp = assign(tmp,speed,ram,hdd,cost,i+1);
    vec.push_back(tmp);
  }
  int cont = 0;
  while(cont < vec.size()){
    for (int i = cont; i < vec.size(); ++i){
      bool flag = false;
      for (int j = 0; j < vec.size(); ++j){
        if(vec[i].s < vec[j].s and vec[i].r < vec[j].r and vec[i].h < vec[j].h ) {
          vec.erase(vec.begin() + i);
          flag = true;
          break;
        }
      }
      if(flag) break;
      cont++;
    }
  }
  sort(vec.begin(), vec.end(),ord);
  printf("%i\n",vec[0].pos );
  return 0;
}