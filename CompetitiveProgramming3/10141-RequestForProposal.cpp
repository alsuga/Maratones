#include<bits/stdc++.h>

using namespace std;

int main() {
  int n, p, reqs, nreq, caso = 0;
  string str, act;
  double actpr, price;
  while(cin >> n >> p and n + p) {
    getline(cin, str);
    if(caso)
      cout << endl;
    for(int i = 0; i < n; i++) {
      getline(cin, str);
    }
    actpr = 300000.0;
    reqs = 0;
    for(int i = 0; i < p; i++) {
      getline(cin, str);
      cin >> price >> nreq;
      if(nreq > reqs or (nreq == reqs and price < actpr)  ) {
        act = str;
        reqs = nreq;
        actpr = price;
      }
      getline(cin, str);
      while(nreq--) {
        getline(cin, str);
      }
    }
    cout << "RFP #" << ++caso << endl << act << endl;
  }
  return 0;
}
