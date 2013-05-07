#include <iostream>
#include <string>
#include <cstdio>
#include <map>

using namespace std;


int main(){
  map<string,int> mp;
  string name, country;
  int cases;
  scanf("%i",&cases);
  while(cases--){
    cin>>country;
    getline(cin,name);
    mp[country]++;
  }
  for (map<string,int>::iterator it = mp.begin(); it != mp.end(); ++it){
    cout<<it->first<<" "<<it->second<<endl;
  }
  return 0;
}