#include <bits/stdc++.h>

using namespace std;

map<char,int> dic;

int cmp(string a, string b){
  int tmp;
  for(int i = 0; i < a.size() and i < b.size(); i++){
    if( dic[a[i]] == dic[b[i]]) continue;
    tmp = (dic[a[i]] < dic[b[i]]);
    return tmp;
  }
  return (a.size() < b.size());
}

int main(){
  int test,year = 1;
  string abc,in;
  vector<string> vec;
  while(true){
    scanf("%i",&test);
    vec.clear();
    if(test == 0) break;
    cin>>abc;
    for(int i = 0; i < abc.size(); i++) dic[abc[i]] = i;
    while(test--) {
        cin>>in;
        vec.push_back(in);
    }
    sort(vec.begin(), vec.end(),cmp);
    printf("year %i\n", year++ );
    for(int i = 0; i < vec.size(); i++) cout<<vec[i]<<endl;
  }
  return 0;
}