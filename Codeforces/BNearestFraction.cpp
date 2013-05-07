#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

double val(int a, double b, int x, double y){
  return fabs(x/y - a/b);
}

int main(){
  int x,y,n,a,b,sa,sb,a1;
  scanf("%i %i %i",&x,&y,&n);
  if(y <= n) printf("%i/%i\n",x,y);
  else{
    a = n*x/y;
    a1 = ceil(n*x/double(y));
    if(val(a,double(n),x,double(y)) < val(a1,double(n),x,double(y))) sa = a;
    else sa = a1; 
    sb = b;
    for (int b = n-1; b > 0; b--)
    {
      a = b*x/y;
      a1 = ceil(b*x/double(y));
      if(val(a1,double(b),x,double(y)) < val(a,double(b),x,double(y))) a = a1;
      if(val(a,double(b),x,double(y)) < val(sa,double(sb),x,double(y))){
        sa = a;
        sb = b;
      }
      
    }
    printf("%i/%i\n",sa,sb);
  }
  return 0;
}