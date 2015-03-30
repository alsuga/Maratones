#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

int cmax;

int width(int t, int p){
  double a = 9/16.0;
  a *= t*p;
  int out = ceil(a);
  return out;
}

int point(int cw){
  double a = 40 * (cw-4);
  a /= (double)cmax;
  int out = ceil(a);
  return 8+out;
}

int main(){__
  int W,N,cant;
  string in;
  for(int test = 0; cin>>W>>N and W+N != 0; test++){
    int acum = 0;
    cmax = 0;
    vector<pair<string,int> > words(N);
    for(int i = 0; i < N ; i++){
      cin>>words[i].first>>words[i].second;
      if(words[i].second > cmax) cmax = words[i].second;
    }
    cmax -= 4;
    int mxh = 0,rest = 0;
    bool flag = true;
    for(int i = 0; i < N; i++){
      int pt = point(words[i].second), wd = width(words[i].first.size(),pt );
      if(rest - wd >= 0) {
        rest-= (wd +10);
        mxh = max(mxh, pt);
      }else{
        acum += mxh;
        rest = W - wd -10;
        mxh = pt;
      }
    }
    acum += mxh;
    cout<<"CLOUD "<<test+1<<": "<<acum<<endl;
  }
  return 0;
}
