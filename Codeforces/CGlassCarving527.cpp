#include <bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){__
  int w,h,n,where,mxw, mxh;
  string dir;
  cin >> w >> h >> n;
  mxw = w;
  mxh = h;
  set<int> vecw,vech;
  vecw.insert(w);
  vech.insert(h);
  set<int>::iterator tmp;
  while(n--) {
    cin>>dir>>where;
    if(dir == "V"){
      vecw.insert(where);
      mxw = *vecw.begin();
      for(set<int>::iterator it = vecw.begin(); it != vecw.end(); ++it){
        if(it == vecw.begin()) continue;
        tmp = it;
        --tmp;
        if(*it - *(tmp) > mxw) mxw = *it - *(tmp);
      }
    } else {
      vech.insert(where);
      mxh = *vech.begin();
      for(set<int>::iterator it = vech.begin(); it != vech.end(); ++it){
        if(it == vech.begin()) continue;
        tmp = it;
        --tmp;
        if(*it - *(tmp) > mxh) mxh = *it - *tmp;
      }
    }

    cout<<mxw*mxh<<endl;
  }
  return 0;
}
