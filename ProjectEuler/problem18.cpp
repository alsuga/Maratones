#include <iostream>
#include <cstdio>

using namespace std;


int main(){
  freopen("ou","r",stdin);
  int cuad[100][100];
  int pos,cant,cas = 0; 
  long tmp;

  for(int i = 0; i < 100; i++){
    cas++;
    cout<<endl;
    for(int j = 0; j< cas; j++){
      scanf("%i",&cuad[i][j]);
    }
  }
  cas = 100;
  for(int i = 98; i >= 0; i--){
    cas--;
    for(int j = 0; j< cas; j++){
      if(cuad[i][j] + cuad[i+1][j] > cuad[i][j] + cuad[i+1][j+1]) cuad[i][j] += cuad[i+1][j];
      else cuad[i][j] += cuad[i+1][j+1];
    }
  }
  cout<<"salida "<<cuad[0][0]<<endl;
  return 0;
}
