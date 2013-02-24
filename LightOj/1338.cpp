#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<cctype>
#define rep(i,men) for(int i=0 ; i < men ; i++) 

using namespace std;

int main(){
    int caso=0,test;
    char nose;
    string entrada,entra;
    scanf("%i",&test);
    scanf("%c",&nose);
    while(test--){
        vector<int> primero (26,0);
        vector<int> segundo (26,0);
        bool flag = true;
        getline(cin,entrada);
        rep(i,entrada.size()){
            if(entrada[i] == '\n') break;
            if(entrada[i] == ' ') continue;
            primero[tolower(entrada[i]) - 'a'] += 1;
        }
        getline(cin,entra);
       
        rep(i,entra.size()){
            if(entra[i] == '\n') break;
            if(entra[i] == ' ') continue;
            segundo[tolower(entra[i]) - 'a'] += 1;
        }
        rep(i,26){
            if(primero[i] != segundo[i]){
                flag = false;
                break;
            }
        }
        printf("Case %i: ",++caso);
        (flag)? printf("Yes\n") : printf("No\n");
    }
    return 0;
}
