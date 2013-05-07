#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<vector>
#include<cctype>
#include<algorithm>

using namespace std;

#define all(x) x.begin(),x.end()

int gcd(int a, int b){
  int tmp;
  while(b){
    a %= b;
    tmp = a;
    a = b;
    b = tmp;  
  }
  return a;  
}

int main(){
  int cas,tmp;
  while(cin>>cas){
    vector<int> cosas;
    while(cas--){
      scanf("%i",&tmp); 
      cosas.push_back(tmp);
    }
    sort(all(cosas));

    for(int i= cosas.size()-1;i >= 0 ; i--){
    bool flag = true;
    for(int j=0;j < cosas.size();j++){
        if(gcd(cosas[i],cosas[j]) != 1 && cosas[i] != cosas[j]){
          flag = false;
          break;
        }
      }
      if(flag){
        printf("%i\n",cosas[i]);
        break;  
      }  
    }   
  }  
  return 0;
}
