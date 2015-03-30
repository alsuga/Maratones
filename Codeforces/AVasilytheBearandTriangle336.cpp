#include <bits/stdc++.h>

#define __   ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main(){ __
  int x,y; cin>>x>>y;
  int x1= 0,x2 = 0,y1 = 0,y2 = 0;
  y1 = abs(x)+abs(y);
  x1 = 0;
  x2 = abs(x)+abs(y);
  y2 = 0;
  if(x < 0) {
    x1 *= -1;
    x2 *= -1;
  }
  if(y < 0){
    y1 *= -1;
    y2 *= -2;
  }
  if(x1 > x2){
    swap(x1,x2);
    swap(y1,y2);
  }
  cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
  return 0;
}