#include<bits/stdc++.h>

using namespace std;

char complement(char i) {
  if(i == 'A')
    return 'T';
  if(i == 'T')
    return 'A';
  if(i == 'G')
    return 'C';
  if(i == 'C')
    return 'G';
}

int main() {
  string dna;
  cin >> dna;
  string rcomple = "";
  for(int i = dna.size() - 1; i >= 0; i--) {
    rcomple += complement(dna[i]);
  }
  cout << rcomple << endl;
}
