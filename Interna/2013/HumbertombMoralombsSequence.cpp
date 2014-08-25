#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long in,out;
    while(true){
        cin>>in;
        if(in == 0) break;
        out = ceil(sqrt(in));
        cout<<out<<endl;
    }
    return 0;
}
