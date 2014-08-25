#include <bits/stdc++.h>

using namespace std;

int main(){
	int N,Q,f,d,a;
	while(cin>>N){
		cin>>Q;
		vector<pair<vector<int>,int> > v(N);
		for(int i = 0; i<N-1; i++){	
		 	scanf("%i %i",&f,&d);
		 	v[f].first.push_back(d);	
		 	v[i].second = 0;		
		}
		while(Q--) {
		 	scanf("%i %i",&f,&d);
		 	if(f){
		 		int acum = 0;
		 		stack<int> st;
		 		st.push(d);
		 		while(!st.empty()){
		 			a = st.top();
		 			acum += v[a].second;
		 			st.pop();
		 			for(int i = 0; i< v[a].first.size(); i++)  st.push(v[a].first[i]);
		 		}
		 		printf("%i\n", acum);
		 	}else{
		 		stack<int> st;
		 		st.push(d);
		 		while(!st.empty()){
		 			a = st.top();
		 			v[a].second = (v[a].second)? 0:1;
		 			st.pop();
		 			for(int i = 0; i< v[a].first.size(); i++)  st.push(v[a].first[i]);
		 		}
		 	}
		}
	}
	return 0;
}