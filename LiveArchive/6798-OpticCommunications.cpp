#include <bits/stdc++.h>

using namespace std;

bool visibles[27][27];
typedef map<char,string> mcs;
mcs mensages;
map<char,set<string> > recibidos;

void check(string a,strinb){
  for(int i = 0; i < 26; i++){
    if(visibles[a[0]-'A'][i] and recibidos[(char)(i+'A')].count(b) == 0){
      if(mensages[(char)(i+'A')].size() == 0)  mensages[(char)(i+'A')] += "[\"";
      else  mensages[(char)(i+'A')] += ", \"";
      mensages[(char)(i+'A')] += b;
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int casos; cin>>casos;    
  string in,a,b,msg;
  char basura;
  while(casos--){
    mensages.clear();
    recibidos.clear();
    memset(visibles,false, sizeof(visibles));
    int inc; cin>>inc;
    while(inc--){
      cin>>in;
      if(in == "VISIBLE"){
        cin>>a>>b;
        visibles[a[0]-'A'][b[0]-'A'] = true;
        visibles[b[0]-'A'][a[0]-'A'] = true;
      }
      if(in == "OBSTACLE" or in == "WEATHER"){
        cin>>a>>b;
        visibles[a[0]-'A'][b[0]-'A'] = false;
        visibles[b[0]-'A'][a[0]-'A'] = false;
      }
      if(in == "MESSAGE"){
        cin>>a;
        cin>>basura;
        getline(cin,b);
        cout<<endl;
        for(int i = 0; i < 9; i++){
          cout<<"[ ";
          for(int j= 0; j < 9; j++){
            cout<<", "<<visibles[i][j];
          }
          cout<<"]"<<endl;
        }
        cout<<endl;
        check(a);
      }
    }
    for(mcs::iterator it = mensages.begin(); it != mensages.end(); ++it){
      cout<<it->first<<" : ";
      cout<<it->second<<"]"<<endl;
    }
    if(casos > 0)cout<<endl;
  }
  return 0;
}
