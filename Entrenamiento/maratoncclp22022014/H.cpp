#include<bits/stdc++.h>

using namespace std;

template <class T>
int toInt(T t){stringstream ss;ss<<t;int r;ss>>r;return r;}

int mat[101][101];
#define MAX 120
string line;

void parse(){
	vector<int> nums;
	for(int i=0;i<line.size();i++){
		string t;
		while(line[i]!=' ' and i<line.size()){
			t+=line[i];i++;
		}
		if(t.size()){
			nums.push_back(toInt(t));
		}
	}
	for(int i=0;i<nums.size()-2;i+=2){
		mat[nums[i]-1][nums[i+1]-1] = 1;
	}
}

int main(){
	int ncas=0;
	while(getline(cin,line)){
		if(line[0]=='0' and line[2]=='0')return 0;
		
		
		for(int i=0;i<100;i++){
			for(int j=0;j<100;j++){
				mat[i][j] = MAX;
			}
		}
		parse();
		
		for(int k=0;k<100;++k){
			for(int i=0;i<100;++i){
				for(int j=0;j<100;++j){
					if(i==j)continue;
					mat[i][j] = min(mat[i][j],mat[i][k]+mat[k][j]);
				}
			}
		}
		/*
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
		/*for(int i=0;i<100;i++){
			for(int j=0;j<100;j++){
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
		*/
		int nump = 0;
		int cont = 0;
		for(int i=0;i<100;i++){
			for(int j=0;j<100;j++){
				if(mat[i][j]==MAX)continue;
				else{
					cont +=mat[i][j];
					nump++;
				}
			}
		}
		
		double sol = (cont*1.0)/(nump*1);
		printf("Case %d: average length between pages = %.3f clicks\n",++ncas,sol);
	}
	
}
