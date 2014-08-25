#include<bits/stdc++.h>

using namespace std;

double minimo;
double dist[17][17];
vector<bool> match(17,false);

double euc(pair<double,double> uno, pair<double,double> dos ){
  double out = sqrt( pow(uno.first - dos.first,2)  + pow(uno.second - dos.second,2));  
  return out;
}

void solve(int init, double cont, int N){
  bool entro = false;
  for(int i = init; i< N; i++){
    if(match[i]) continue;
    entro = true;
    match[i] = true;
    for(int  j = i+1; j < N; j++){
          if(match[j]) continue;
          match[j] = true;
          cont+= dist[i][j];
          cout<<cont<<endl;
          if(cont < minimo) cout<<cont<<" i: "<<i<<" j: "<<j<<endl,solve(init+1,cont,N);
          match[j] = false;
    }
    match[i]= false;
  } 
  if(!entro and cont < minimo) minimo = cont;  
}

int main(){
  int N,t1,t2,caso = 0;
  string tmp;
  
  while(true){
    cin>>N;
    if(N == 0) break;
    vector< pair<double,double> > vec;
    for(int i = 0; i<2*N; i++){
      cin>>tmp>>t1>>t2;
      vec.push_back(make_pair(t1,t2));  
    }
    for(int i = 0; i< vec.size(); i++){
      for(int j = i+1; j < vec.size(); j++){
        dist[i][j] = euc(vec[i], vec[j]);
        dist[j][i] = dist[i][j];
      }
    }
    minimo = 500000.0;
    solve(0, 0.0, vec.size());
    printf("Case %i: %.2lf\n",++caso,minimo);
  }
  return 0;
}
