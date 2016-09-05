#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct point {
  ll x, y;
  point(){}
  point(ll a, ll b): x(a), y(b) {}
};

ll area(const vector<point> &p, int f, int t, int N) {
  ll r = 0;
  int a, j, x, y;
  a = t - f;
  if(f > t)
    a += N ;
  for(int i = 0; i < a; ++i) {
    j = (i + 1) % a;
    x = (i + f) % N;
    y = (j + f) % N;
    r += p[x].x * p[y].y - p[y].x * p[x].y;
  }
  return r;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N;
  while(cin >> N) {
    vector<point> p(N);
    ll total = 0;
    for(int i = 0; i < N; i++) {
      cin >> p[i].x >> p[i].y;
      if(i > 0) {
        int j = (N + i - 1) % N;
        total += p[j].x * p[i].y - p[i].x * p[j].y;
      }
    }
    total += p[N-1].x * p[0].y - p[0].x * p[N-1].y;
    ll act = 0, mindiff = LLONG_MAX, res, carol, carla;
    int mans;
    for(int i = 2; i < N - 1; ++i) {
      act = area(p, 0, i + 1, N);
      res = total - act;
      if(mindiff > fabs(res - act)) {
        mindiff = fabs(res - act);
        carol = max(act, res);
        mans = i;
      }
    }
    ll maxdiff = 0, c1, c2;
    int mid = mans;
    for(int i = 1; i < N; ++i) {
      act = 0;
      mindiff = LLONG_MAX;
      mans = mid - 1;
      while(true) {
        mans = (mans + 1) % N;
        if((i + 1) % N == mans) {
          mans = (mans + 1) % N;
        }
        if(i == mans + 1)
          break;
        act = area(p, i, (mans + 1) % N, N);
        res = total - act;
        if(mindiff > abs(res - act)) {
          mindiff = abs(res - act);
          c1 = max(act, res);
          mid = mans;
        } else
          break;
      }
      if(mindiff > maxdiff) {
        maxdiff = mindiff;
        carol = c1;
      }
    }
    cout << carol << " " << total - carol << endl;
  }
  return 0;
}
