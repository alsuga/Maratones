#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  short n, x=0,y=0,flag = 0;
  int tmp = -1;
  scanf("%d",&n);
  int vec[100001];
  for(int i = 0; i < n; i++){
    cin>>vec[i];
    if(tmp > vec[i]){
      if(flag == 0) x = i-1;
      if(flag == 2) flag = 3;
      else flag = 1;
    }else{
      if(flag == 1) {
        flag =2;
        y = i-1;
        if( act vec[y+1] < x vec[x] ) flag = 3;
        if(vec[x-1] > vec[y]) flag = 3;
      }
    }
    if(flag == 3) break;
    tmp = vec[i];
  }
  if(flag == 1) y = n-1;
  if(flag !=3 )printf("yes\n%i %i\n",x+1,y+1);
  else puts("no");

  return 0;
}
