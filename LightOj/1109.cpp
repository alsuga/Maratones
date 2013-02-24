#include<algorithm>
#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<cmath>
#include<map>
#include<set>

#define rep(i,men) for(int i=0 ; i < men ; i++) 

using namespace std;

vector<int> divi(1000,0);
vector<int> nums(1000);

bool comparar(int uno,int dos){
    if(divi[uno-1] < divi[dos-1]) return true;
    if(divi[uno-1] == divi[dos-1] && uno > dos) return true;
    return false;
}

int main(){
    int test, in, caso = 0;
    rep(i,1000){
        nums[i]=i+1;
    }
    for(int j=1; j<=1000;j++){    
        for (int i=1; i*i<=j; i++) {
            if (j%i == 0) {
                divi[j-1] += 1;
                if (i*i<j) divi[j-1] += 1;
            }
        }
    }
    
    
    sort(nums.begin(),nums.end(),comparar);
    scanf("%i",&test);
    while(test--){
        scanf("%i",&in);
        printf("Case %i: %i\n", ++caso,nums[in-1]);
    }

    return 0;
}
