#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,W_sum = 0,E_sum = 0;
  char S;
  cin >> N;
  vector<int> num_W(N,0);
  vector<int> num_E(N,0);
  for(int i = 0; i < N; i++){
    cin >> S;
    // 前回までの値入力
    num_W[i] = W_sum;
    num_E[i] = E_sum;
    if(S == 'W'){
      num_W[i] += 1;
      W_sum += 1;
    }else{
      num_E[i] += 1;
      E_sum += 1;
    }
  }
  int sum = num_E[N-1];
  for(int i = 1; i < N; i++){
    int compare_sum = num_W[i - 1] + (num_E[N-1] - num_E[i]);
    sum = min(sum,compare_sum);
  }
  cout << sum << endl;

}