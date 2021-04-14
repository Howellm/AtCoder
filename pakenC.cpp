#include <bits/stdc++.h>
using namespace std;

int bubble(vector<vector<int> > stu, int base, int N){
  int Max = stu[0][base];
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      
    }
    Max = max(Max,stu[i][base]);
  }
  return Max;
}

int main(){
  int N,M;
  cin >> N >> M;
  vector<vector<int> > stu(N,vector<int>(M));
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      cin >> stu[i][j];
    }
  }
  int sum[M];
  for(int i = 0; i < M; i++){
    sum[i] += bubble(stu,i,N);
  }
  sort(sum,sum + M);
  cout << sum[M - 1] + sum[M - 2] << endl;
}