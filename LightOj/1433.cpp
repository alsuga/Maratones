#include <iostream>
#include <cstdio>
#include <cmath>

#define pi acos(-1)

using namespace std;



typedef pair<double,double> punto;

int main(){
	int cases = 0,test;
	double grados,num,den,length;
	punto a,b,o, vec1,vec2;
	scanf("%i",&test);
 	while(test--){
		cin>>o.first>>o.second>>a.first>>a.second>>b.first>>b.second;
		vec1.first = a.first - o.first;
		vec1.second = a.second - o.second;
		vec2.first = b.first - o.first;
		vec2.second = b.second - o.second;
		num = vec1.first * vec2.first + vec1.second * vec2.second;
		den =  sqrt(vec1.first * vec1.first + vec1.second*vec1.second)*sqrt(vec2.first * vec2.first + vec2.second*vec2.second);
		grados = num / den;
		if(grados < -1) grados = -1;
		if(grados > 1) grados = 1;
		grados = acos(grados);
		length = grados * sqrt((double)(vec1.first * vec1.first + vec1.second*vec1.second));
		printf("Case %i: %.8f\n",++cases,length);
	}
	return 0;
}