#include <bits/stdc++.h>

using namespace std;

void find_listgreater(vector<int> &a, vector<int> &b){
  vector<int> p(a.size());
  int u , v;
  if(a.empty()) return;
  b.push_back(0);
  for(size_t i = 1; i < a.size(); i++){
    if(a[b.back()] < a[i]){
      p[i] = b.back();
      b.push_back(i);
      continue;
    }
    for( u = 0, v = b.size() -1; u < v;){
      int c = (u + v) / 2;
      if( a[b[c]] < a [i]) u = c+1;
      else v = c;
    }
    if(a[i] < a[b[u]]){
      if(u > 0) p[i] = b[u-1];
      b[u] = i;
    }
  }
  for(u = b.size(), v = b.back(); u--;v = p[v]) b[u]=v;
}

void find_listsmaller(vector<int> &a, vector<int> &b){
  vector<int> p(a.size());
  int u , v;
  if(a.empty()) return;
  b.push_back(0);
  for(size_t i = 1; i < a.size(); i++){
    if(a[b.back()] > a[i]){
      p[i] = b.back();
      b.push_back(i);
      continue;
    }
    for( u = 0, v = b.size() -1; u < v;){
      int c = (u + v) / 2;
      if( a[b[c]] > a [i]) u = c+1;
      else v = c;
    }
    if(a[i] > a[b[u]]){
      if(u > 0) p[i] = b[u-1];
      b[u] = i;
    }
  }
  for(u = b.size(), v = b.back(); u--;v = p[v]) b[u]=v;
}



int main(){
  int n,tmp;
  while(cin>>n){
    vector<int> seq, lower, upper;
    for(int i = 0; i<n; i++){
      scanf("%i",&tmp);
      seq.push_back(tmp);
    }
    find_listsmaller(seq,lower);
    find_listgreater(seq,upper);

    if(lower.size() == upper.size()) puts("Caution. I will not intervene.");
    else puts("Don't worry. I must intervene.");
  }
  return 0;
} 