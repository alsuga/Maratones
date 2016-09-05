#include<bits/stdc++.h>

using namespace std;

int sort(vector<int> &in) {
  int pasos = 0, ins, sz = in.size();
  vector<int> out;
  for(int i = 0; i < sz; i++) {
    ins = in[i];
    for(int j = 0; j <= out.size(); j++) {
      if(j == out.size()) {
        out.push_back(ins);
        break;
      }
      if(ins < out[j]) {
        pasos += out.size() - j;
        out.insert(out.begin() + j, ins);
        break;
      }
    }
  }
  return pasos;
}

int main() {
  int test, k; cin >> test;
  vector<int> in(20);
  while(test--) {
    cin >> k;
    for(int i = 0; i < 20; i++)
      cin >> in[i];
    cout << k << " " << sort(in) << endl;
  }
  return 0;
}
