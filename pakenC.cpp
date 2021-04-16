#include <bits/stdc++.h>
using namespace std;


int main(){
  int N,M;
  cin >> N >> M;
  vector<vector<int> > stu(N,vector<int>(M));
  for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
      cin >> stu[i][j];
    }
  }
  long long sum = 0;
  for(int i = 0; i < M - 1; i++){
    for(int j = i + 1; j < M; j++){
      long long points = 0;
      for(int k = 0; k < N; k++){
        int val_a = stu[k][i];
        int val_b = stu[k][j];
        points += max(val_a,val_b);
      }
      if(points > sum) sum = points;
    }
  }
  cout << sum << endl;
}