#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(){
	vector<char> vec;
	char tmp;
	int casos,tiempo;
	cin>>casos>>tiempo;
	while(casos--){
		cin>>tmp;
		vec.push_back(tmp);
	}
	while(tiempo--){
		for (int i = 0; i < vec.size()-1; ++i){
			if(vec[i] == 'B' and vec[i+1] == 'G'){
				vec[i] = 'G';
				vec[i+1] = 'B';
				i++;
			}
		}
	}
	for (int i = 0; i < vec.size(); ++i)
	{
		cout<<vec[i];
	}
	cout<<endl;
	return 0;
}