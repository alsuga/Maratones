#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;


vector<long> vec;

bool palindrome(long i){
  long tmp1 = i, tmp2 = 0,cre = 1;
  while(tmp1){
    tmp2 *= 10;
    tmp2 += tmp1%10;
    tmp1 /= 10;
  }

  if(tmp2 == i) {
    return true;
  }  
  return false;
}

int numero(long A,int num = 0){
  int cont = 0;
  for (long i = 0; vec[i] <= (A - num) and i < vec.size(); ++i){
    cont++;
  }
  return cont;
}

int main(){
  for (long i = 1, j = i*i; j < 100000000000001; i++, j = i*i){
    if(palindrome(i) and palindrome(j)){
      cout<<i<<"  "<<j<<endl;
      vec.push_back(j);
    }
  }
  cout<<vec.size();
  long A,B,test,caso = 0,ca,cb;
  scanf("%i",&test);
  while(test--){
    scanf("%ld %ld", &A,&B);
    printf("Case #%i: %i\n",++caso ,int(numero(B) - numero(A,1)));
  }
  return 0;
}