#include<iostream>
#include<cstdio>
#include<string>

using namespace std;


int main(){
    int tmp;
    string a;
    for(int i= 100; i < 1000 ; i++){
        for(int j = i; j < 1000; j++){
            tmp = i*j;
            a = (tmp % 10) + '0'; 
            tmp /= 10;
            while(tmp > 0){
                a += (tmp % 10) + '0';
                tmp /= 10;
            }
            bool res = true;
            for(int k = 0; k < (a.size()-1)/2 ; k++){
                if(a[k] != a[a.size()- k - 1]) res = 'n';
            }
            if(res) cout<<a<<endl;
        }
    }
    return 0;
}
