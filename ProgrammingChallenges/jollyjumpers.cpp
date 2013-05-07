#include <iostream>
#include <cstdio>
#include <stack>
#include <cmath>
#include <set>

using namespace std;

int main(){
	int cases;
	while(scanf("%i",&cases) != EOF){
		int uno, dos , tmp;
		set <int> nums;
		scanf("%i",&dos);
		for(int i = 1; i<cases; i++){
					uno = dos;
					scanf("%i", &dos);
					tmp = fabs(uno - dos);
					if(tmp>= 1 and tmp < cases)nums.insert(tmp);
				}
		
		if (nums.size() == cases -1) printf("Jolly\n");
		else printf("Not jolly\n");
	}
	return 0;
}