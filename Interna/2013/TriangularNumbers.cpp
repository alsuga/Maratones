#include <bits/stdc++.h>

using namespace std;

unsigned long long sum(unsigned long long in){
    unsigned long long tmp = in+1;
    if(in %2 == 0) in /= 2;
    else tmp /= 2;
    return in*tmp;
}

int main(){
    unsigned long long in,tmp;
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    while(1){
        cin>>in;
        if(in == 0) break;
        tmp = sqrt(in*2);
        if(in == sum(tmp)) puts("YES");
        else puts("NO");
    }
    return 0;
}
