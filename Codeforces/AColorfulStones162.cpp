#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
	string in,ins;
	cin>>in>>ins;
	int pos = 0;
	for(int i = 0; i < ins.size() ; i++){
		if(ins[i] == in[pos]) pos++;
	}
	printf("%i\n", pos+1);
	return 0;
}