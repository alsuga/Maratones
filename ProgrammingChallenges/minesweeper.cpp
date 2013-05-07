#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
	int puzzle[100][100];
	int m,n, casos = 0;
	string a;
	bool flag = false;
	while(true){
		scanf("%i %i",&n, &m);
		if(n == m and m == 0 ) break;
		if(flag)printf("\n");
		else flag =  true;
		for(int i = 0; i < n ; i++ ){
			cin>>a;
			for (int j = 0; j < m; j++){
				if(a[j] == '.') puzzle[i][j] = 0;
				else puzzle[i][j] = -1;
			}
		}

		for(int i = 0; i < n ; i++ ){
			for (int j = 0; j < m; j++){
				if(puzzle[i][j] == -1){
					for(int ii = i-1; ii < i+2 and ii < n; ii++){
						for(int jj = j-1; jj < j+2 and jj < m ; jj++){
							if(ii < 0 )break;
							if(jj < 0 )continue;
							if (puzzle[ii][jj] >= 0 ) puzzle[ii][jj] +=1;
						}
					}
				}
			}
		}
		printf("Field #%i:\n", ++casos);
		for(int i = 0; i < n ; i++ ){
			for (int j = 0; j < m; j++){
				if(puzzle[i][j] < 0) printf("*");
				else printf("%i",puzzle[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}