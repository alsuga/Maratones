#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<pair<int,int>, string> par;
bool ord(par a, par b){
  if(a.first.first < b.first.first) return true;
  if(a.first.first == b.first.first) return (a.first.second < b.first.second);
  return false;
}

int main(){
  int test,in;
  scanf("%i",&test);
  vector<par> vec;
  string name, type;
  for(int i = 0; i < test; i++){
    cin>>name>>type;
    if(type == "rat") in = 1;
    if(type == "child" or type == "woman") in = 2;
    if(type == "man") in = 3;
    if(type == "captain") in = 4;
    vec.push_back(make_pair(make_pair(in,i),name));
  }
  sort(vec.begin(), vec.end(),ord);
  for(int i = 0; i<vec.size(); i++){
    cout<<vec[i].second<<endl;
  }
  return 0;
}