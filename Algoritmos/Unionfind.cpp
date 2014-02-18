#include <iostream>
#include <cstdio>

using namespace std;

int id[10] = {0,1,2,3,4,5,6,7,8,9};
int sz[10] = {1,1,1,1,1,1,1,1,1,1};

int root(int i){
  while(id[i] != i)  i = id[i];
  return i;
}

bool Find(int a, int b){
  return root(a) == root(b);
} 

void Union(int a, int b){
  int i = root(a);
  int j = root(b);
  if(sz[i] < sz[j]){
    id[i] = j;
    sz[j] += sz[i];
  }else{
    id[j] = i;
    sz[i] += sz[j];
  }
}

void show(){
  for(int i = 0; i < 10; i++) printf("%i ",id[i]);
  puts("");
}

int main(){
  int a,b;
  while(1){
    scanf("%i %i", &a,&b);
    Union(a,b);
    show();
  }
  return 0;
}