#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

double po (double in){
  return (in*in);
}

double di(double x, double y, double nx, double ny){
  double out = po(nx - x) + po(ny - y);
  return sqrt(out);
}

int main(){__
  double r,x,y,nx,ny;
  double dist;
  cin>>r>>x>>y>>nx>>ny;
  dist = di(x,y,nx,ny);
  dist /= (2*r);
  long out = ceil(dist);
  cout<<out<<endl;
  return 0;
}
