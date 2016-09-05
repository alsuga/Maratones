#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

int main() {
  int f;
  cin >> f;
  int maxw = 0, mh1 = 0, mh2 = 0, tmp1, tmp2, p1 = 0, p2;
  vector<pii> gente(f);
  for(int i = 0; i < f; i++) {
    cin >> tmp1 >> tmp2;
    gente[i] = make_pair(tmp1, tmp2);
    maxw += tmp1;
    if(mh1 == 0 or tmp2 > mh1) {
      mh2 = max(mh2, mh1);
      mh1 = tmp2;
      p2 = p1;
      p1 = i;
    } else {
      if(tmp2 > mh2) {
        mh2 = tmp2;
        p2 = i;
      }
    }
  }
  int out = 0;
  for(int i = 0; i < f; i++) {
    out = maxw - gente[i].first;
    if(i == p1)
      out *= mh2;
    else
      out *= mh1;
    if(i)
      cout << " ";
    cout << out;
  }
  cout << endl;
  return 0;
}
