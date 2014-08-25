#include <bits/stdc++.h>

using namespace std;

struct point{
  int x, y;
  point(){}
  point(int _x, int _y): x (_x), y (_y){}
  void print(){
    printf("%i %i\n", x,y);
  }
};

inline int distsqr(const point &a){
  return (a.x *a.x) + (a.y)*(a.y);
}


double ang(const point &b){
  double out = acos( (b.y)/(sqrt(b.x*b.x + b.y*b.y)));
  if (b.x < 0) out =  2*acos(-1) - out;
  return  out;
}

bool angleCmp(const point &s, const point &t){
  double a=ang(s), b=ang(t);
  if (a < b) return true;
  if (a == b){
    return (distsqr(s) > distsqr(t));
  }
  return false;
}

int main(){
  int npo, t1, t2;
  while(cin>>npo){
    vector <point> vec(npo);
    for(int i = 0; i< npo; i++){
      scanf("%i %i", &t1, &t2);
      point tmp(t1,t2);
      vec[i] = tmp;
    }
    printf("%i\n",npo);
    sort(vec.begin(), vec.end(), angleCmp);
    for(int i = 0; i < vec.size(); i++){
        vec[i].print();
    }
  }
  return 0;
}