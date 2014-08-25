#include <bits/stdc++.h>

#define db(i) cout<<i<<endl;
#define fr(i,l) for(int i = 0; i < l ; i++)
#define fri(i,a,l) for(int i = a;  i < l; i--)

using namespace std;

int main(){
  int n,d,t, Time = 0,out = 0; scanf("%i %i",&n,&d);
  fr(i,n){
    scanf("%i",&t);
    Time+=t;
  }
  Time += (n-1)*10;
  out = (n-1)*2;
  if(Time > d) puts("-1");
  else{
    out += (d - Time)/5;
    printf("%i\n", out);
  }
  return 0;
}