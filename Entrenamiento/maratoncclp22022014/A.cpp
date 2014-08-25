#include<bits/stdc++.h>

using namespace std;

int main(){
  int N,tmp;
  priority_queue<unsigned long long,vector<unsigned long long>,greater<unsigned long long> > Q;
  unsigned long long acum, a;
  while(true){
    scanf("%i",&N);
    if(N==0) break;
    for(int i=0 ; i<N ; i++){
      scanf("%i",&tmp);
      Q.push(tmp);
    }
    acum = 0; 
    while(true){
      a = Q.top();
      Q.pop();
      if(Q.empty()) break; 
      a += Q.top();
      Q.pop();
      Q.push(a);
      acum += a;
    }    
    printf("%lld\n",acum);
  }
  return 0;
}
