#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;


int main(){
	int uno= 1,dos = 1,tres;
	while(true)){
		tres = uno + dos;
		uno = dos;
		dos = tres;
		if(ceil(tres) == 1000) break; 
	}
	cout<<tres<<endl;
	return 0;
}