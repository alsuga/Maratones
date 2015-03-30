#include<bits/stdc++.h>
using namespace std;
#define ___ ios_base::sync_with_stdio(0);cin.tie(NULL);
#define endl '\n'

template <class T>
long long toi(T t){stringstream ss;ss<<t;long long r;ss>>r;return r;}

string line;
deque<long long> nums;
deque<char> op;

bool ck(int i){
  return (line[i] >= '0' and line[i] <= '9');
}

void solve(){
  long long solM=0,tmp;
  char act;
  while(!op.empty()){
    if(op.front() == ')'){ 
      op.pop_front();
      return ;
    }
    if(op.front() == '('){
      op.pop_front();
      solve();
    }
    
    if(op.empty()) return;
    solM = nums.front();
    nums.pop_front();
    act = op.front();
    op.pop_front();
    if(!op.empty()) 
      if(op.front() == '('){
        op.pop_front();
        solve();
      }
    tmp = nums.front();
    nums.pop_front();
    if(act == '*')nums.push_front(solM *tmp);
    else nums.push_front(solM + tmp);  
  }
}


int main(){___
    int n,c;
    getline(cin,line);
    c=toi(line);
    while(c--){
      getline(cin,line);
      bool f1 = false,err = false,f2 = false;
      int par = 0;
      for(int i = 0; i < line.size() and !err; i++){
        long long tmp = 0;
        if(line[i]!='*' and line[i]!='+' and line[i]!='(' and line[i]!=')' and !ck(i)) err = true;
        if(line[i]!='*' and line[i]!='+' and line[i]!='(' and line[i]!=')'){
          long long tt = line[i]-'0';
          if(f1){
            tmp = 10*nums.back();
            nums.pop_back();
            tt += tmp;
          }
          else f1 = true;
          nums.push_back(tt);
        }else{
          if(line[i] == '('){
           if(i) if(ck(i-1)) err = true;
           par++;
          }
          if(line[i] == ')') {
            if(i) if(line[i-1] == '(' or line[i-1] == '+' or line[i-1] == '*') err = true;
            par--;
          }
          if(line[i] == '+' or line[i] == '*')
            if(i) if(line[i-1] == '(' or line[i-1] == '+' or line[i-1] == '*') err = true;
            if(i == 0) err = true;
          f1 = false;
          op.push_back(line[i]);
        }  
      }
      char last = line[line.size()-1];
      if(par != 0 or last == '+' or last == '*') err = true;
      if(err) cout<<"ERROR"<<endl;
      else {
        solve();
        cout<<nums.front()<<endl;
      }
      while(!nums.empty()) {nums.pop_back();}
      while(!op.empty()) op.pop_back();
    }
    return 0;
}