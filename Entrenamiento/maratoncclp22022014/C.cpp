#include<bits/stdc++.h>

using namespace std;

map<string,int> arabic;
map<int,string> romans;

void genRomans(){
  romans[1] = 'I';romans[2] = "II";romans[3] = "III";romans[4] = "IV";romans[5] = "V";romans[6] = "VI";romans[7] = "VII";romans[8] = "VIII";romans[9] = "IX";romans[10] = 'X';
  romans[20] = "XX";romans[30] = "XXX";romans[40] = "XL";romans[50] = "L";romans[60] = "LX";romans[70] = "LXX";romans[80] = "LXXX";romans[90] = "XC";romans[100] = "C";
  romans[200] = "CC";romans[300] = "CCC";romans[400] = "CD";romans[500] = "D";romans[600] = "DC";romans[700] = "DCC";romans[800] = "DCCC";romans[900] = "CM";
  romans[1000] = "M";romans[2000] = "MM";romans[3000] = "MMM";
  for(int i=11;i<=3999;i++){
     int a = i;
     if(romans[a]!="")continue;
      string t;
      int po=1;
      vector<string> tt;
      while(a){
        int t1 = a%10;

        tt.push_back(romans[t1*po]);
        po*=10;
        a/=10;
      }

      for(int j=tt.size()-1;j>=0;j--){
        t +=tt[j];
      }
      romans[i] = t;
  }
}

void genArabics(){
  for(int i=1;i<=3999;i++){
    arabic[romans[i]] = i;
  }
}

template <class T>
int toInt(T t){stringstream ss;ss<<t;int r;ss>>r;return r;}


int main(){
  genRomans();
  genArabics();
  string S;
  while(cin>>S){
    int t=toInt(S);
    if(t){
      cout<<romans[t]<<endl;
    }else{
      cout<<arabic[S]<<endl;
    }

  }
}
