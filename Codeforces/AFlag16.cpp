#include <bits/stdc++.h>

using namespace std;

int main(){
  int m, n;
  vector<string> flag;
  string tmp;
  scanf("%i %i", &n,&m);
  bool band = false;
  for(int i = 0; i < n; i++) {
    cin>>tmp;
    flag.push_back(tmp);
  }

  for(int i = 0; i < n ; i++){
    for(int j = 1; j < m; j++){
      if(flag[i][j-1] != flag[i][j]) band = true;
      if(band) break;
    }
    if(i > 0) if(flag[i-1][0] == flag[i][0]) band = true;
    if(band) break;
  }
  if(!band) puts("YES");
  else puts("NO");
  return 0;
}