#include <cstdio>
#include <cmath>
#include <functional>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <map>

using namespace std;
vector<int> vec;

int main(){
	int a = 0;
	//28123
	for(int i=2; i < 28123; i++){
		int acum = 0;
		for(int j = 1; j< (i/2) +1; j++){
			if(i%j == 0) acum += j;
		}

			
		if(i < acum) vec.push_back(i);
	}
	for(int i= 1; i < 28124; i++){
		bool flag = false; 
		for (int j=0; vec[j] < i; j++){
			int tmp = i - vec[j];
			flag =  binary_search (vec.begin(), vec.end(), tmp);

			/*for(int k=0; k <= j; k++){
				if(tmp < vec[k]) break;
				if(vec[k] == tmp){ 
					flag = false;
					break;
				}
			}*/
			if(flag) break;
		}
		if(!flag) {
			a += i;
		}

	}
	cout<<"salida : "<<a<<endl;
	return 0;
}