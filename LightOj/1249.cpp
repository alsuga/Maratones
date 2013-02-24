#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

int main(){
	int casos = 0, cases, in;
	scanf("%i", &cases);
	while(cases--){
		scanf("%i", &in);
		int posm = 0,posmenor = 0,uno,dos,tres,mayor,menor;
		string name;
		vector <string> vec;
		cin>>name;
		vec.push_back(name);
		scanf("%i %i %i",&uno,&dos,&tres);
		mayor = uno * dos * tres;
		menor = mayor;
		for(int i = 1; i < in; i++){
			cin>>name;
			vec.push_back(name);
			scanf("%i %i %i",&uno,&dos,&tres);
			if((uno * dos * tres) > mayor) {
				mayor = uno*dos*tres;
				posm = i;
			}
			if((uno * dos * tres) < menor) {
				menor = uno*dos*tres;
				posmenor = i;
			}
		}
		printf("Case %i: ",++casos);
		if(vec[posm] == vec[posmenor]) cout<<"no thief"<<endl;
		else cout<<vec[posm]<<" took chocolate from "<<vec[posmenor]<<endl;
	}
	return 0;
}