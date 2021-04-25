#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,Q;
  string S;
  cin >> N >> S >> Q;
  char alter;
  vector<int> T(Q), A(Q), B(Q);
  for(int i = 0; i < Q; i++){
    cin >> T[i] >> A[i] >> B[i];
  }
  for(int i = 0; i < Q; i++){
    if(T[i] == 1){
      alter = S[A[i]-1];
      S[A[i]-1] = S[B[i]-1];
      S[B[i]-1] = alter;
    }else{
      if(T[i+1] == 2){
        i++;
      }else{
        // cout << S.substr(N,2*N/2+1) << S.substr(0,N) << endl;
        S = S.substr(N,2*N/2+1) + S.substr(0,N);
      }
    }
  }

  cout << S << endl;
}