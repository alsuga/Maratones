#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

int main(){
	freopen("in","r",stdin);
	freopen("","w",stdout);
	string a;
	while(cin>>a){
		if(a[0] == 'S') break;
		if(a[0] == '0')a.erase(a.begin());
		cout<<a<<endl;

	}
	return 0;
}