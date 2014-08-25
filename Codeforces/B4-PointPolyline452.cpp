#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;
typedef vector<pii> vii;

double dis(pii x, pii y){
  double a = x.first - y.first;
  double b = x.second - y.second;
  return sqrt(a*a + b*b);
}

vii vec,out,vec1,out1;
map<pii,bool> visit,visit1;
int n,m;

void genneig(pii punto, vii &vec, map<pii,bool> &visit){
  pii tmp;
  if(visit[punto]) return;

  visit[punto] = true;

  tmp = make_pair(punto.first-1, punto.second);
  if(tmp.first >= 0 and !visit[tmp]) vec.push_back(tmp);

  tmp = make_pair(punto.first-1, punto.second-1);
  if(tmp.first >= 0 and tmp.second >= 0 and !visit[tmp]) vec.push_back(tmp);

  tmp = make_pair(punto.first, punto.second-1);
  if(tmp.second >= 0 and !visit[tmp]) vec.push_back(tmp);

  tmp= make_pair(punto.first+1, punto.second-1);
  if(tmp.first < n and tmp.second >= 0 and !visit[tmp]) vec.push_back(tmp);

  tmp = make_pair(punto.first+1, punto.second);
  if(tmp.first < n and !visit[tmp]) vec.push_back(tmp);

  tmp = make_pair(punto.first+1, punto.second+1);
  if(tmp.first < n and tmp.second < m and !visit[tmp]) vec.push_back(tmp);

  tmp = make_pair(punto.first, punto.second+1);
  if(tmp.second < m and !visit[tmp]) vec.push_back(tmp);

  tmp = make_pair(punto.first-1, punto.second+1);
  if(tmp.first >= 0 and tmp.second < m and !visit[tmp]) vec.push_back(tmp);
}

int main(){
  int acti,actj, pos,act;
  double dist = 0,tmp,acum = 0,acum2 = 0;
  scanf("%i %i", &n,&m);
  vec.push_back(make_pair(0,0));
  if(n != 0 and m != 0)vec.push_back(make_pair(n,m));
  if(m!= 0) vec.push_back(make_pair(0,m));
  if(n != 0) vec.push_back(make_pair(n,0));
  for(int  k = 0; k < 2; k++){
    for(int i = 0; i < vec.size(); i++){
      if(visit[vec[i]]) continue;
      for(int j = 0; j < vec.size(); j++){
        if(i == j or visit[vec[j]]) continue;
        tmp = dis(vec[j],vec[i]);
        if(dist < tmp){
          dist = tmp;
          acti = i;
          actj = j;
        }
      }
    }
    out.push_back(vec[acti]);
    out.push_back(vec[actj]);
    acum += dist;
    genneig(vec[acti],vec,visit);
    genneig(vec[actj],vec,visit);
    dist = 0;
  }
  acum += max(dis(out[1], out[2]),dis(out[1], out[3]));


  vec1.push_back(make_pair(0,0));
  vec1.push_back(make_pair(n,m));
  vec1.push_back(make_pair(0,m));
  vec1.push_back(make_pair(n,0));
  out1.push_back(make_pair(0,0));
  for(int  k = 0; k < 3; k++){
    dist = 0;
    for(int i = 0; i < vec1.size(); i++){
      if(visit1[vec1[i]]) continue;
      tmp = dis(out1[k],vec1[i]);
      if(dist < tmp){
        dist = tmp;
        act = i;
      }
    }
    out1.push_back(vec1[act]);
    acum2 += dist;
    genneig(out[k],vec1,visit1);
  }



  if(acum2 > acum)  for(int i = 0; i < out1.size(); i++) cout<<out1[i].first<<" "<<out1[i].second<<'\n';
  else{
    for(int i = 0; i < 2; i++) cout<<out[i].first<<" "<<out[i].second<<'\n';
    if(dis(out[1], out[2]) > dis(out[1], out[3])){
      cout<<out[2].first<<" "<<out[2].second<<'\n';
      cout<<out[3].first<<" "<<out[3].second<<'\n';
    }else{
      cout<<out[3].first<<" "<<out[3].second<<'\n';
      cout<<out[2].first<<" "<<out[2].second<<'\n';
    }
  }
  return 0;
}