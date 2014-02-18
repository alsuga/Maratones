#include <string>
#include <iostream>
#include <cstdio>

using namespace std;

char mat[10][10];
int n,m;

int prueba(int i,int j){
  if(i-1 >= 0) if(mat[i-1][j] == 'P') return 1;
  if(i+1 < n) if(mat[i+1][j] == 'P') return 1;
  if(j-1 >= 0) if(mat[i][j-1] == 'P') return 1;
  if(j+1 < m) if(mat[i][j+1] == 'P') return 1;
  return 0;
}

int main(){
	char tmp;
	scanf("%i %i\n", &n,&m);
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) scanf("%c",&mat[i][j]);
		scanf("%c",&tmp);
	}
  int cont = 0;
  for(int i = 0; i<n; i++) {
    for(int j = 0; j<m; j++) {
      if(mat[i][j] == 'W') cont+= prueba(i,j);
    }  
  }
  printf("%i\n", cont);
	return 0;
}