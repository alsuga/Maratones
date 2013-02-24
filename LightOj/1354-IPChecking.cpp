using namespace std;
#include <algorithm>
#include <iostream>
#include <iterator>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>


#define rep(i,hola) for(int i=0;i<hola;i++)

string cambio(int num){
    string tmp;
    while(num){
        tmp.insert(tmp.begin(),(char)(num%10 + '0'));
        num /=10;
    }
    return tmp;
}

int main(){
    string nrm, bin;
    int comp,caso=0,entra;
    scanf("%i",&entra);
    while(entra--){
        cin>>nrm>>bin;
        string tmp;
        comp = 0;
        int val = 7;
        rep(j,bin.length()){
            if(bin[j] == '.' ){
                val = 7;
                tmp += cambio(comp);
                comp=0;
                tmp+='.';                    
                continue;
            }
            if(bin[j] == '1') comp += 1<<val;
            val--;
       }
       tmp += cambio(comp);
       printf("Case %i: ",++caso);
       if(nrm.compare(tmp) == 0) printf("Yes\n");
       else printf("No\n");
    }

    return 0;
}

