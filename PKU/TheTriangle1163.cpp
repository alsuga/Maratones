#include <iostream>

using namespace std;

int main(){
  int tri[102][102], n,tmp;
  cin>>n;
  for(int i = 0; i < n; i++)
    for(int j = 0; j <= i; j++) cin>>tri[i][j];
  for(int i = 1; i < n; i++)
    for(int j = 0; j <= i; j++){
      if(j) tmp = tri[i][j] + tri[i-1][j-1];
      if(j<i) tri[i][j] += tri[i-1][j];
      tri[i][j] = max(tri[i][j],tmp);
    }
  tmp = 0;
  for(int i = 0; i < n; i++) tmp = max(tmp,tri[n-1][i]);
  cout<<tmp<<endl;
  return 0;
}
