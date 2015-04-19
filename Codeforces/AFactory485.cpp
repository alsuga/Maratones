#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,orn;
    cin>>n>>m;
    set<int> st;
    while(n%m){
        n += n%m;
        n%=m;
        if(st.count(n) > 0){
            puts("No");
            return 0;
        }
        st.insert(n);
    }
    puts("Yes");
    return 0;
}
