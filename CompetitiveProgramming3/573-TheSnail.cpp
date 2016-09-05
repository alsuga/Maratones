#include<bits/stdc++.h>

using namespace std;

int main() {
  int H, U, D, F, day;
  while(cin >> H >> U >> D >> F and H) {
    double act = 0, climb = U, fat = (F * climb) / 100.0;
    day = 0;
    while(true) {
      day++;
      act += climb;
      if(act > H) {
        cout << "success on day " << day << endl;
        break;
      }
      act -= D;
      if(act < 0) {
        cout << "failure on day " << day << endl;
        break;
      }
      climb -= fat;
      if(climb < 0)
        climb = 0;
    }
  }
  return 0;
}
