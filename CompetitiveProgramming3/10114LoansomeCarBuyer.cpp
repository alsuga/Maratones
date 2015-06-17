#include<bits/stdc++.h>
using namespace std;
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl '\n'

int main(){
  int time, n;
  double pay, loan,vec[101],tmp2;
  while(cin>>time>>pay>>loan>>n and time >= 0){
    int tmp1;
    while (n--) {
      cin >> tmp1 >> tmp2;
      for (int i = tmp1; i < 101; i++)
        vec[i] = tmp2;
    }
    double act = (loan+pay) * (1-vec[0]), mp = loan/time,curloan = loan;
    int month = 0;
    while (act < curloan) {
      month++;
      curloan -= mp;
      act = act * (1-vec[month]);
    }
    cout<< month << " month";
    if(month > 1)
      cout<<"s";
    cout<<endl;
  }
  return 0;
}
