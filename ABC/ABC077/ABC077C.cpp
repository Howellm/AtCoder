#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  vector<vector<int> > snuke(3,vector<int>(N));
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < N; j++){
      cin >> snuke[i][j];
    }
  }
  int cnt = 0;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      int res_a = snuke[2][i] - snuke[1][j];
      if(res_a <= 0) continue;
      for(int k = 0; k < N; k++){
        int res_b = snuke[1][j] - snuke[0][k];
        if(res_b > 0) cnt++;
      }
    }
  }
  cout << cnt << endl;
}