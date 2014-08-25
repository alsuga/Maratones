#include <bits/stdc++.h>

using namespace std;

int main(){
  int test,mes1,an1,mes2,an2; scanf("%i", &test);
  double out;
  while(test--){
    cin>>mes1>>an1>>mes2>>an2;
    if(an1 == an2) out = (0.5/ (double)(12 - mes1 + 1)) * (mes2 - mes1);
    else {
      out = 0.5;
      out += ((an2-1) - an1);
      out += (1/(double)12.0) * (mes2-1);
    }
    printf("%.4lf\n",out);
  }
  return 0;
}