#include <iostream>
#include <cmath>

using namespace std;

int max_size,vec[301],md[301][301],memo[301][31];

int med(int desde,int hasta) {
  if(md[desde][hasta] > 0) return md[desde][hasta];
  int mid = (desde + hasta) / 2,ac = 0;
  for(int i = desde; i <= hasta; i++){
    ac += abs(vec[i]- vec[mid]);
  }
  md[desde][hasta] = ac;
  return ac;
}

int partir(int voy, int quedan) {
  quedan--;
  if(voy == max_size and quedan < 0) return 0;
  if(quedan < 0) return 10000000;
  if(voy+quedan == max_size) return 10000000;
  if(memo[voy][quedan] > 0) return memo[voy][quedan];
  int mini = 10000000;
  for(int i = voy; i+quedan < max_size;i++){
    mini = min(mini,partir(i+1,quedan) + med(voy,i));
  }
  memo[voy][quedan] = mini;
  return mini;
}

int main() {
  int q;
  cin>>max_size>>q;
  for(int i = 0; i < max_size; i++) cin>>vec[i];
  cout<<partir(0,q)<<endl;
  return 0;
}
