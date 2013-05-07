#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

int bin(int tmp){
    string a;
    a = (tmp % 2) + '0'; 
    tmp /= 2;
    while(tmp > 0){
        a += (tmp % 2) + '0';
        tmp /= 2;
    }
    bool res = true;
    for(int k = 0; k < a.size() ; k++){
        //cout<<a[k]<<"  "<<a[a.size()- k - 1]<<endl;
        if(a[k] != a[a.size()- k - 1]) return false;
    }
    return true;
}

bool ispal(int tmp){
    string a;
    a = (tmp % 10) + '0'; 
    tmp /= 10;
    while(tmp > 0){
        a += (tmp % 10) + '0';
        tmp /= 10;
    }
    bool res = true;
    for(int k = 0; k < a.size() ; k++){
        //cout<<a[k]<<"  "<<a[a.size()- k - 1]<<endl;
        if(a[k] != a[a.size()- k - 1]) res = false;
    }
    return res;
}

bool dos(int tmp){
    if(ispal(tmp) and bin(tmp))return true;
    else return false;
}

int main(){
    int tmp;
    vector<int> vec;
    vector<int> vec2;

    for(int i= 1; i <= 1000000 ; i++){
        if(dos(i))vec.push_back(i);
    }
    int acum;
    for (int i = 0; i < vec.size(); ++i)
    {
        acum += vec[i];
    }
    cout <<"salida : "<<acum<<endl;
    return 0;
}
