#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<vector>
#include<cctype>

using namespace std;

int main(){
  freopen("samp.in","r",stdin);
  string in;
  int pos = 0;
  while(getline(cin,in) ){      
      for(int i=0;i<in.size();i++)in[i] = tolower(in[i]);
      if(in.find("problem") < 80) printf("yes\n");
      else printf("no\n");
    }
    cout<<in;
  return 0;    
}
