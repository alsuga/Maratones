#include <bits/stdc++.h>

using namespace std;

int main() {
  int R, C;
  int mat[102][102];
  while(cin >> R >> C) {
    set<int> diff;
    int out = 1;
    int right = 0, left = 0, up = 0, down = 0;

    for(int i = 0; i < R; i++) {
      for(int j = 0; j < C; j++) {
        cin >> mat[i][j];
        diff.insert(mat[i][j]);
        if(i > 0) {
          if(mat[i - 1][j] < mat[i][j] and left) {
            left = false;
            out++;
          }
          if(mat[i][j - C - 1] < and right) {
            right = mat[i][j - C - 1];
            out++;
          }
        }
      }
    }

    out += diff.size();

    for(int i = 0; i < C; i++) {
      for(int j = 0; j < R; j++) {
        if(mat[i][j] > up) {
          up = mat[i][j];
          out++;
        }
        if(mat[R - i - 1][j] > down) {
          up = mat[R - i - 1][j];
          out++;
        }
      }
    }

  }
  return 0;
}
