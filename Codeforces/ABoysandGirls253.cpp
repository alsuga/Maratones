#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
  int boys,girls;
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  scanf("%i %i", &boys, &girls);
  while(boys+girls > 0){
    if(boys > girls){
      printf("B");
      boys--;
      if(girls > 0) {
        printf("G");
        girls--;
      }
    }
    else{
      printf("G");
      girls--;
      if(boys > 0){
       printf("B");
       boys--;
      }      
    }
  }
  puts("");
  return 0;
}
