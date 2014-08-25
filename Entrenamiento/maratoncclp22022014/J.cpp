#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,ncas=0;cin>>n;
	while(n--){
		int m;cin>>m;
		int num[m];
		int a=0,b=0;
		for(int i=0;i<m;i++){
			cin>>num[i];
		}
		int act= num[0];
		for(int i=1;i<m;i++){
			if(act<num[i]){
				a++;
			}else if(act>num[i])
				b++;
			act = num[i];
		}
		cout<<"Case "<<++ncas<<": "<<a<<" "<<b<<endl;
	}
}
