#include<algorithm>
#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#include<set>
#define MAX_NODES 100000
#define rep(i,men) for(int i=0 ; i < men ; i++) 

using namespace std;

struct algo{
    int to, weight;
    edge() {}
    edge(int t, int w) : to(t), weight(w) {}
    bool operator < (const edge &that) const {
        return weight > that.weight;
    }
};

vector<algo> 
vector<bool> visitado(100000,false);

int main(){
    int N; scanf("%i",&N);
    
    return 0;
}
