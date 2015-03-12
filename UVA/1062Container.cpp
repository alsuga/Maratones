#include <bits/stdc++.h>

using namespace std;

int main(){
  int caso = 0;
  string in;
  while(cin>>in and in != "end"){
    vector<char> vec;
    vector<char>::iterator low;
    vec.push_back(in[0]);
    for(int i = 1; i < in.size(); i++){
      low = lower_bound(vec.begin(), vec.end(), in[i]);
      if(low == vec.end()){
        vec.push_back(in[i]);
      }else{
        *low = in[i];
      }
    }
    cout<<"Case "<<++caso<<": "<<vec.size()<<endl;
  }
  return 0;
}
