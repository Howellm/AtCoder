#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<long long> A(N + 5,0), B(N + 5,0);
  for(int i = 0; i < N + 1; i++) cin >> A[i];
  for(int i = 0; i < N; i++) cin >> B[i];

  long long sum = 0;
  for(int i = 0; i < N; i++){
    if(A[i] > B[i]){
      sum += B[i];
    }else{
      sum += min(B[i], A[i] + A[i + 1]);
      A[i + 1] = A[i + 1] > (B[i] - A[i]) ? A[i + 1] - (B[i] - A[i]) : 0;
      // if(A[i+1] >= B[i] - A[i]){
      //   A[i + 1] -= (B[i] - A[i]);
      // }else{
      //   A[i + 1] = 0;
      // }
    }
  }
  cout << sum << endl;
  return 0;
}