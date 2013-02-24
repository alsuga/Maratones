#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(){
	vector<bool> vec;
	int n,m,x,y,tmp;
	cin>>n>>m;
	if(n%2 == 0 and m % 2 == 0){
		if(n < m){
			tmp = n;
			n = m;
			m = tmp;
		} 
		x = ((2*m - 2) + (n - m - 2))/2;
		y = 
	}else{
		if(n%2 == 1 and m%2 == 1){
			if(n > m){
				tmp = n;
				n = m;
				m = tmp;
			}			
			x = ((n/2)*2 + (m - n/2)-1)/2;
		}
	}
	for(int i = 0 ; i < n+m ; i++){

	}
	return 0;
}