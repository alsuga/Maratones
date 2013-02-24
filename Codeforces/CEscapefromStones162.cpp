#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;


int main(){
	string in;
	cin>>in;
	vector<int>left;
	vector<int>rigth;
	for(int i = 0; i < in.size(); i++){
		if(in[i] == 'l') left.push_back(i+1);
		else rigth.push_back(i+1);
	}
	for(int i= 0; i<rigth.size();i++){
		printf("%i\n",rigth[i]);
	}
	for(int i= left.size()-1; i >= 0; i--){
		printf("%i\n", left[i]);
	}
	return 0;
}