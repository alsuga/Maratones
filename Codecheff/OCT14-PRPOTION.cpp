#include<bits/stdc++.h>
#define _t top()

using namespace std;

typedef priority_queue<int> pq;

void qt(pq &a){
  int tmp = a._t;
  cout<<a.size()<<" "<<tmp;
  tmp /=2;
  a.pop();
  a.push(tmp);
  cout<<" "<<tmp<<endl;
}

int may(pq &r,pq &g, pq &b){
  int rr = r._t, gg = g._t, bb = b._t;
  cout<<rr<<" "<<gg<<" "<<bb<<" <-"<<endl;
  if(rr >= gg and rr >= bb){
    qt(r);
    return rr;
  }
  if(gg >= rr and gg >= bb){
    qt(g);
    return gg;
  }
  qt(b);
  return bb;
}

int main(){
  int tmp,r,g,b,m,total, test;
  cin>>test;
  while(test--){
    cin>>r>>g>>b>>m;
    total = r+g+b;
    pq rpq,gpq,bpq;
    while(r--){
      cin>>tmp;
      rpq.push(tmp);
    }
    while(g--){
      cin>>tmp;
      gpq.push(tmp);
    }
    while(b--){
      cin>>tmp;
      bpq.push(tmp);
    }
    while(m--){

      cout<<may(rpq,gpq,bpq)<<"------"<<endl;;
    }
    cout<<may(rpq,gpq,bpq)<<endl;
  }
  return 0;
}
