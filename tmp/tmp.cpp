#include <bits/stdc++.h>

using namespace std;

long long inv = 0;
int L[500002];
int R[500002];

void merge(int A[],int p, int q, int r){
    int n1 = q - p + 1;
    int n2 = r - q;
    L[n1+1] = 1000001 ;
    R[n2+1] = 1000001 ;
    for(int i = 1; i <= n1; i++) L[i] = A[p+i - 1]; 
    for(int i = 1; i <= n2; i++) R[i] = A[q+i];
    int i = 1, j = 1;
    for(int k= p; k <= r; k++ ){
        if(L[i]<= R[j]){
            A[k] = L[i];
            i++;
        }else{
            A[k] = R[j];
            j++;
            inv= inv + n1 - i +1;
        }
    }
}

void mergesort(int A[],int p,int r){
    int q = (p+r)/2;
    if(p < r){
        mergesort(A,p,q);
        mergesort(A,q+1,r);
        merge(A,p,q,r);
    }
}


int main(){
  int n, vec[1000002];
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  while(cin>>n and n){
    for(int i = 1; i <=  n; i++) cin>>vec[i];
    inv = 0;
    mergesort(vec,1,n);
    cout<<((inv % 2)?"Marcelo":"Carlos")<<endl;
  }
  return 0;
}
