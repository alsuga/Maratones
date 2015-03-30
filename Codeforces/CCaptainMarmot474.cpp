#include <bits/stdc++.h>

using namespace std;

typedef struct punto{
  int x,y;
} pt;

double area(vector <pt> &p){
  double r = 0.0;
  for(int i = 0; i < p.size(); i++){
    int j = (i+1) % p.size();
    r+= p[i].x*p[j].y - p[j].x*p[i].y;
  }
  return r/2.0;
}

bool cmp(double a,double b){
  cout<<a<<" "<<b<<endl;
  return (a==b);
}

pt rotate(pt in,pt base){
  pt out;
  out.x = 0 - base.x;
  out.y = 0 - base.y;
  out.x += in.y * -1;
  out.y += in.x;
  //cout<<"------------------------------"<<endl;
  //cout<<out.x<<" "<<out.y<<" "<<base.x<<" "<<base.y<<" "<<in.x<<" "<<in.y<<endl;
  return out;
}

bool check(vector<pt> &in){
  double a = -1, b = -1,dist;
  int ca=0,cb = 0,tmp;
  for(int i = 0; i < 4; i++){
    for(int j = i+1; j<4; j++){
      if(in[i].x == in[j].x and in[i].y == in[j].y) return false;
      tmp = in[i].x-in[j].x;
      tmp *= tmp;
      dist = tmp;
      tmp = in[i].y-in[j].y;
      tmp *= tmp;
      dist += tmp;
      dist = sqrt(dist);
 //     cout<<dist<<endl;
      if(a == -1) {
        a = dist;
        ca++;
        }else if(dist == a) ca++;
          else if(b == -1) {
            b = dist;
            cb++;
            }else if(dist == b) cb++;
              else return false;
    }
  }
  if(ca>=4) {
    if(cmp(area(in),a*a) ) return true;
  }  
  if(cb>=4) {
    if(cmp(area(in),b*b) ) return true;
  }
  return false;
}


int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int n;cin>>n;
  while(n--){
    int mini = 50;
    vector<pt> puntos(4),base(4);
    for(int i = 0; i < 4; i++){
      cin>>puntos[i].x>>puntos[i].y>>base[i].x>>base[i].y;
    }
    for(int i = 0; i < 4; i++){
      for(int j = 0; j < 4; j++){
        for(int k = 0; k < 4; k++){
          for(int l = 0; l < 4; l++){
            if(check(puntos)) mini = min(mini,l+k+j+i);
            puntos[0] = rotate(puntos[0],base[0]);
          }
          puntos[1] = rotate(puntos[1],base[1]);
        }
        puntos[2] = rotate(puntos[2],base[2]);
      }
      puntos[3] = rotate(puntos[3],base[3]);
    }
    if(mini == 50) cout<<-1<<endl;
    else cout<<mini<<endl;
  }
  return 0;
}
