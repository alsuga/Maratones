#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<vector>
#include<cctype>
#include<algorithm>

using namespace std;

#define all(x) x.begin(),y.begin()
#define f(x) x.first
#define s(x) x.second
#define REP(i,a,b) for (int i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define foreach(x,v) for(typeof (v).begin() x = (v).begin;\
x != (v).end();++x)
#define D(x) cout<<#x " = " << x <<endl;

typedef pair<double,double> pii;
typedef pair<pii,pii> dpair;
typedef pair<pii,double> cipair;
typedef vector<double> vi;
typedef vector<pii> vpii;

double cuad(double a){
  return a*a;
  }

int main(){
  int m,n;
  vpii puntos;
  pii tmp3;
  cipair tmp2;
  dpair tmp;
  string in;
  vector<dpair> rectangle;
  vector<cipair> circle;
  scanf("%i",&m);
  while(m--){
    cin>>in;
    if(in == "rectangle"){
      cin>>tmp.first.first>>tmp.first.second>>tmp.second.first>>tmp.second.second;
      rectangle.push_back(tmp);
    }else{
      cin>>tmp2.first.first>>tmp2.first.second>>tmp2.second;
      circle.push_back(tmp2); 
    }
  }
  scanf("%i",&n);
  while(n--){
    int shot = 0;
    cin>>tmp3.first>>tmp3.second;
    for(int  rec = 0; rec < rectangle.size();rec++){
      if((f(tmp3) >= f(f(rectangle[rec]))) && (s(tmp3) >= s(f(rectangle[rec]))) && (f(tmp3) <= f(s(rectangle[rec]))) && f(tmp3)<= s(s(rectangle[rec]))){
        shot++;
      }
    }
    for(int cir=0; cir < circle.size() ; cir++){
      if( (cuad(f(tmp3)- f(f(circle[cir]))) + cuad(s(tmp3)- s(f(circle[cir])))) <= cuad(s(circle[cir])) ) shot++;  
    }
    cout<<shot<<endl; ///
  }
  return 0;  
}
