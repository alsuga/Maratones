#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n,m,k,tmp,dif,out,end,in;
	vector<int> vec;
	cin>>n>>m>>k;
	for(int i=0;i<n;i++){
		cin>>tmp;
		vec.push_back(tmp);
	}
	dif = k - m;
	out = 0;
	if(dif < 0){
		sort(vec.begin(),vec.end());
		end = vec.size();
		in = 0;
		while(true){
			if(k>0)k--;
			else in--;
			end--;
			if(end < 0) break;
			in +=vec[end];
			out++;
			if(in + k - m >= 0) break;
		}
		if(in + k - m < 0)out = -1;
	}
	cout<<out<<endl;
	return 0;
}