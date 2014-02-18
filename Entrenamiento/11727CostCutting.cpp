#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main(){
  int test,a,b,c,caso = 0;
  vector<int> num(3);
  scanf("%i",&test);
  while(test--){
    scanf("%i %i %i",&a,&b,&c);
    num[0]= a;
    num[1]= b;
    num[2]= c;
    sort(num.begin(), num.end());
    printf("Case %i: %i\n",++caso,num[1]);
  }

  return 0;
}