#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

string in;

short memo[5000][5000];

int palindrome(int desde, int hasta){
  if(desde >= hasta)return 1;
  if(memo[desde][hasta] != -1 ) return memo[desde][hasta];
  if(in[desde] != in[hasta]) return 0;
  memo[desde][hasta] = palindrome(desde+1,hasta-1) + 2;
  return memo[desde][hasta];
}

int main(){
  int size,out= 0;
  cin>>size>>in;
  memset(memo,-1,sizeof memo);
  for(int i = 0; i < size; i++){
     for (int j = i; j < size ; j++) {
       out = max(out,palindrome(i,j));
     }
  }
  cout<<size-out<<endl;
  return 0;
}
