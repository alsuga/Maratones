#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int num;
  cin >> num;
  vector<int> vec(num);
  for(int i = 0; i < num; i++)
    cin >> vec[i];

  cout << vec[1] - vec[0] << " " << vec[vec.size() - 1] - vec[0] << endl;
  for(int i = 1; i < vec.size() - 1; i++) {
    if(vec[i] - vec[i-1] < vec[i+1] - vec[i])
      cout << vec[i] - vec[i-1] << " ";
    else
      cout << vec[i+1] - vec[i] << " ";
    if(vec[i] - vec[0] > vec[vec.size()-1] - vec[i])
      cout << vec[i] - vec[0] << endl;
    else
      cout << vec[vec.size()-1] - vec[i] << endl;
  }
  cout << vec[vec.size() - 1] - vec[vec.size() - 2] << " " << vec[vec.size() - 1] - vec[0] << endl;
  return 0;
}
