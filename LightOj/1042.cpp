#include<cstdio>
#include<iostream>

using namespace std;

unsigned int secret(unsigned int num){
  unsigned int tmp, tmp2;
  tmp = (num & -num);
  tmp2 = tmp + num;
  //cout<<tmp<<"  "<<tmp2<<" "<<(tmp2 ^ num)<<" "<<((tmp2 ^ num) >> 2)<<" "<<(((tmp2 ^ num) >> 2) / tmp)<<endl;
  return (((tmp2 ^ num) >> 2) / tmp) | tmp2; 
}

int main(){
  int casos=0,test;
  unsigned int in;
  scanf("%i",&test);
  while(test--){
    cin>>in;
    cout<<"Case "<<++casos<<": "<< secret(in)<<endl;
  }
  return 0;
}
