#include <cstdio>
#include <cmath>
#include <functional>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <map>

using namespace std;

#define all(x) x.begin(),x.end()
#define rep(i,a,b) for(int i=a;i<b;i++)
#define REP(i,n) rep(i,0,n)
#define foreach(x, v) for (typeof (v).begin() x = (v).begin(); \
x != (v).end(); ++x)
#define D(x) cout << #x " = " << x << endl;

typedef long long int lld;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vii;

int main(){
  string in;
  long tmp = 0;
  cin>>in;
  rep(i,5,1000){
    long tmp2 = 1;
    rep(j,i-5,i){
        tmp2 *= int(in[j] - '0');
    }
    if(tmp2 > tmp) tmp = tmp2;
  }
  printf("%ld\n",tmp);
  return 0;
}


