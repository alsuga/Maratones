#include <bits/stdc++.h>
using namespace std;
#define ___ ios_base::sync_with_stdio(0);cin.tie(NULL);
#define endl '\n'

vector<int> vec(21,0);

void ps(string &b, int in, int val){
  if(in == b.size()) {
    vec[val+10]++;
    return;
  }
  if(b[in] == '-') {
    val--;
    ps(b,in+1,val);
    return;
  }
  if(b[in] == '+') {
    val++;
    ps(b,in+1,val);
    return;
  }
  if(b[in] == '?'){
    ps(b,in+1,val-1);
    ps(b,in+1,val+1);
    return;
  }
}

int main(){___
  string a,b; cin>>a>>b;
  int pos = 0;
  for(int i = 0; i < a.size(); i++){
    if(a[i] == '+') pos++;
    else pos--;
  }
  ps(b,0,0);
  double out,ac = 0,tot = 0;
  for(int i = 0; i <= 20; i++){
    if(vec[i] != 0) ac+= vec[i];
    if(i-10 == pos) tot  = vec[i];
  }
  out = tot/ac;
  printf("%.11lf\n", out);
  return 0;
}
