#include <bits/stdc++.h>

using namespace std;

void bfs(vector<int> &vec, int t, int &bt, int &ex) {
  bt = 0;
  ex = 0;
  vector<int> visit(3601, -1);
  visit[0];
  queue<int> q;
  q.push(0);
  while(!q.empty()) {
    act = q.pop();
    if()
  }
}

int main() {
  int test; cin >> test;
  while(test--) {
    cin >> n >> t;
    vector<int> vec(n);
    for(int i = 0; i < n; i++)
      cin >> vec[i];
    int bt, ex;
    bfs(vec, t, bt, ex);
  }
  return 0;
}
