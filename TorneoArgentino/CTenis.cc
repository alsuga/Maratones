#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n,s,j,d;
int points_a,points_b;
int sets_a,sets_b;
char t;
int gana;

void  ganoA(){
  if(points_a-points_b <d  ||  points_a <j) return;
  sets_a ++;
  points_a=0;
  points_b=0;
 }

void ganoB(){
  if(points_b - points_a <d || points_b <j) return;
  sets_b ++;
  points_a=0;
  points_b=0;
 }

bool termino(){
  return sets_a==s || sets_b==s;
}

void start(){
  cin>>n>>s>>j>>d;
  points_a=0; points_b=0;
  sets_a=0; sets_b=0;
  for(int i=0;i<n;i++){
    cin>>t;
    gana=(t=='A')? 1:0;
    points_a+=(gana==1)? 1:0;
    points_b+=(gana==0)? 1:0;
    ganoA();
    ganoB();

    //cout<<sets_a<<" "<<sets_b <<endl;
    if(termino()) break;

  }
  cout<<sets_a<<" "<<sets_b<<endl;
}


int main(){
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  start();
  return 0;
}
