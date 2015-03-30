#include<bits/stdc++.h>

using namespace std;
int tank[100002];


int buscar(int a, int b, int to){
  int tmp = ceil((a+b)/2.0);
  if(to == tank[tmp]) {
    if(tmp == b) return b;
    return buscar(tmp,b,to);
  }
  if(a == b) return a;
  if((to <= tank[b] and to > tank[b] - tank[1] )) return b;
  if(tank[tmp] - tank[1] + 1 > to) return buscar(a,tmp-1,to);
  return buscar(tmp,b,to);
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n,q,tmp;
  while(cin>>n>>q){  
    tank[0] = 0;
    for(int i = 1; i <= n; i++) {
      cin>>tank[i];
      tank[i] += tank[i-1];
    }
    for(int i = 0; i < q; i++) {
      cin>>tmp;
      if(i) cout<<" ";
      cout<<buscar(1,n,tmp);

    }
    cout<<endl;
  }
  return 0;
}
