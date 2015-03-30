#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);

long long bsearch(long long li, long long ld, long long n, bool l=true){
  long long mid = (ld+li-1)/2, out;
  if(ld == mid or li == mid){
    if((li == n and !l) or (ld == n and l)) out = 1;
    else out = 0;
    return out;
  }
  if (n <= mid){
    if(l) out =  1+ bsearch(li,mid,n,!l);
    else out = (ld-li)+1+ bsearch(li,mid,n,l);
  } else {
    if(l) out = (ld-li)+1 + bsearch(mid+1,ld,n,l);
    out = 1 + bsearch(mid+1,ld,n,!l);
  }
  return out;
}

int main(){__
  int h;
  long long n,l=1;
  cin>>h>>n;
  long long out = bsearch(1,1<<h,n);
  cout<<out+1<<endl;
  return 0;
}
