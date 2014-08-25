#include <bits/stdc++.h>

#define db(i) cout<<i<<endl
#define fr(i,l) for(int i = 0; i < l ; i++)
#define fri(i,a,l) for(int i = a;  i < l; i--)

using namespace std;

bool mx(int a, int b){ return (b < a);}

int main(){
  int n,m,tmp; scanf("%i %i",&n,&m);
  vector<int> min(n), max(m);
  fr(i,n){
    scanf("%i",&tmp);
    min[i] = tmp;
  }
  fr(i,m){
    scanf("%i",&tmp);
    max[i] = tmp;
  }
  sort(min.begin(), min.end());
  sort(max.begin(), max.end(),mx);
  long out = 0,a = 6;
  while(a--){
    int p_i = n-1, p_j = m-1;
    fr(i,n){
      if(min[i] >= max[0]){
        p_i = i-1;
        break;
      }
    }
    fr(i,m){
      if(max[i] < min[p_i]){
        p_j = i-1;
        break;
      }
    }
    cout<<min[p_i]<<" <--";
    cout<<endl;
    fr(i,m) cout<<max[p_j]<<"<- ";
    cout<<endl;
    if(p_i == -1 and p_j == -1) break;
    if(p_i > p_j){
      fr(i,n){
        out += max[p_j] - min[i];
        min[i] = max[p_j];
      }
    }else{
      fr(i,m){
        out += max[i] - min[p_i];
        max[i] = min[p_i];
      }
    }
  }
  cout<<out<<endl;
  return 0;
}