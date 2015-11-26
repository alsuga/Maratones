#include <bits/stdc++.h>

using namespace std;

#define pii pair<int, int>
#define m_pii make_pair
#define vs vector<string>

bool check(vs &train, pii act, int next, int n) {
  int x = act.first, y = act.second;
  if(train[y][x + 1] != '.' or train[y + next][x + 1] != '.')
    return false;
  x++;
  y += next;
  for(int i = x; i < ((x + 2 >= n)? n : x + 2); ++i) {
    if(train[y][i] != '.')
      return false;
  }
  return true;
}

bool dfs(vs &train, int s, int n) {
  stack<pii> q;
  q.push(m_pii(0, s));
  map<pii, bool> visited;
  visited[m_pii(0, s)] = true;
  pii act;
  while(!q.empty()) {
    int x = q.top().first;
    int y = q.top().second;
    act = q.top();
    q.pop();
    int tmp = ((x + 3 >= n)? n - 1 : x + 3);
    if(x == n - 1)
      return true;
    if(check(train, act, 0, n)) {
      if(!visited[m_pii(tmp, y)]) {
        visited[m_pii(tmp, y)] = true;
        q.push(m_pii(tmp, y));
      }
    }
    if(y > 0)
      if(check(train, act, -1, n)) {
        if(!visited[m_pii(tmp, y - 1)]) {
          visited[m_pii(tmp, y - 1)] = true;
          q.push(m_pii(tmp, y - 1));
        }
      }
    if(y < 2)
      if(check(train, act, 1, n)) {
        if(!visited[m_pii(tmp, y + 1)]) {
          visited[m_pii(tmp, y + 1)] = true;
          q.push(m_pii(tmp, y + 1));
        }
      }
  }
  return false;
}

int main() {
  int test; cin >> test;
  vs train(3);
  int n, k;
  while(test--) {
    cin >> n >> k;
    cin >> train[0] >> train[1] >> train[2];
    int s;
    if(train[0][0] == 's')
      s = 0;
    if(train[1][0] == 's')
      s = 1;
    if(train[2][0] == 's')
      s = 2;
    train[s][0] = '.';
    if(dfs(train, s, n))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}
