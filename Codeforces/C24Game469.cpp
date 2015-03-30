#include <bits/stdc++.h>

#define __   ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

void inpar(int n){
  int cont = 0;
  while(n > 5){
    cout<<n<<" - "<<n-1<<" = 1"<<endl;
    n-=2;
    cont++;
  }
  while(cont--){
    cout<<"24 * 1 = 24"<<endl;
  }
}

void par(int n){
  int cont = 0;
  while(n > 4){
    cout<<n<<" - "<<n-1<<" = 1"<<endl;
    n-=2;
    cont++;
  }
  while(cont--){
    cout<<"24 * 1 = 24"<<endl;
  }
}

int main(){ __
  int n;
  cin>>n;
  if(n <4 ) cout<<"NO"<<endl;
  else{
    cout<<"YES"<<endl;
    if(n % 2){
      cout<<"5 * 4 = 20"<<endl;
      cout<<"3 - 1 = 2"<<endl;
      cout<<"2 * 2 = 4"<<endl;
      cout<<"20 + 4 = 24"<<endl;
      inpar(n);
    }else{
      cout<<"4 * 3 = 12"<<endl;
      cout<<"12 * 2 = 24"<<endl;
      cout<<"24 * 1 = 24"<<endl;
      par(n);
    }
  }
  return 0;
}