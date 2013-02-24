#include<iostream>
#include<vector>
#include<string>
#include<cstdio>

using namespace std;

int main(){
  int test,casos=0,instr,max,temporal;
  string tmp;
  scanf("%i",&test);
  while(test--){
    scanf("%i %i",&max,&instr);
    vector<int> vec;
    printf("Case %i:\n",++casos);
    while(instr--){
      cin>>tmp;
      if(tmp.compare("pushLeft") == 0){
        scanf("%i",&temporal);
        
        if(vec.size()==max){
          cout<<"The queue is full"<<endl;
        }else{
          vec.push_back(temporal);
          cout<<"Pushed in left: "<<vec.back()<<endl;
        }
        
      }else{
        if(tmp.compare("pushRight") == 0){
          scanf("%i",&temporal);
           if(vec.size() == max){
             cout<<"The queue is full"<<endl;
           }else{
             vec.insert(vec.begin(),temporal);
             cout<<"Pushed in right: "<<vec.front()<<endl;
           }
        }else{
          if(tmp.compare("popLeft") == 0){
            if(!vec.empty() ){
              cout<<"Popped from left: "<<vec.back()<<endl;
              vec.pop_back();
            }else{
              cout<<"The queue is empty"<<endl;
            }
          }else{
            if(!vec.empty()){
              cout<<"Popped from right: "<<vec.front()<<endl;
              vec.erase(vec.begin());
            }else{
              cout<<"The queue is empty"<<endl;
            }
          }
        }
      }
    }
  }
  return 0;
}


