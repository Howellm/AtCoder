#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  vector<int> B(N,0);
  cin >> N;
  for(int i = 0; i < N - 1; i++){
    cin >> B[i];
  }
  int A = B[0] + B[N - 2];
  for(int i = 1; i < N - 1; i++){
    A += min(B[i-1],B[i]);
  }
  cout << A << endl;
}