#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main(){
	vector<char> a;
	int casos, cont = 0;
	char tmp;
	scanf("%i",&casos);
	while(casos--){
		cin>>tmp;
		a.push_back(tmp);
	}
	for (int i = 0; i < a.size()-1; ++i)
	{
		if(a[i] == a[i+1]){
			cont++;
			a.erase(a.begin()+i+1);
			i=-1;
			/*for (int j = i+2; j < a.size(); ++j){
				if(a[j] != a[i] and a[j] != a[j+1]){
					tmp = a[j];
					a.erase(a.begin()+j);
					a.insert(a.begin()+i+1,tmp);
					break;
				}
			}*/
		}
	}
	cout<<cont<<endl;	
	return 0;
}