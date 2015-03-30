#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  string in;
  cin>>in;
  int tmp = in.size()-1;
  int num = (int)((in[tmp] - '0');
  if(tmp != 0)num += (10 * (in[tmp-1] - '0')));
  if(num%4 == 0) puts("4");
  else puts("0");
  return 0;
}
