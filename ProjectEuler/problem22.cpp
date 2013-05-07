#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int valor(string a){
	int tmp;
	for (int j = 0; j < a.length(); j++)	{
			tmp += a[j] -'A' + 1;
		}
	return tmp;
}

int main(){
	freopen("sal.txt","r",stdin);
	string in;
	long out = 0;
	vector<string> vec;
	while(cin>>in){
		vec.push_back(in);
	}
	sort(vec.begin(),vec.end());
	for(int i = 0; i < vec.size(); i++){
		out += (i+1) * valor(vec[i]);
	}
	cout<<"salida : "<<out<<endl;
	return 0;
}