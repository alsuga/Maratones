#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	char c;
	freopen("names.txt","r",stdin);
	freopen("sal.txt","w+",stdout);
	while(scanf("%c",&c) == 1){
		if(c < 'A' or c > 'Z') printf(" ");
		else printf("%c",c);
	}
	return 0;
}