#include <bits/stdc++.h>

#define db(i) cout<<i<<endl
#define fr(i,l) for(int i = 0; i < l ; i++)
#define fri(i,a,l) for(int i = a;  i < l; i--)

using namespace std;

int main(){
  int n,x,tmp; scanf("%i %i",&n,&x);
  vector<int> c;
  long long out = 0;
  fr(i,n) {
    scanf("%i",&tmp);
    c.push_back(tmp);
  }
  sort(c.begin(), c.end());
  fr(i,n) {
    out += x*c[i];
    if(x > 1) x--;
    cout<<x<<endl;
  }
  db(out);
  return 0;
}