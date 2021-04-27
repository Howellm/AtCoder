#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  vector<vector<bool> > map(5001,vector<bool> (5001,false));
  for(int i = 0; i < n; i++){
    cin >> x[i] >> y[i];
    map[x[i]][y[i]] = true;
  }
  // cout << map[9][4] << endl;
  int max_sum = 0;
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      int X = abs(x[i] - x[j]);
      int Y = abs(y[i] - y[j]);
      if(x[i] + Y <= 5000 and y[i] + X <= 5000 and x[j] + Y <= 5000 and y[j] + X <= 5000){
        if(map[x[i] + Y][y[i] + X] == true and map[x[j] + Y][y[j] + X] == true){
          // cout << X << Y << endl;
          int sum = pow(X,2) + pow(Y,2);
          max_sum = max(max_sum,sum);
        }
      }else if(x[i] - Y >= 0 and y[i] - X >= 0 and x[j] - Y >= 0 and y[j] - X >= 0){
        if(map[x[i] - Y][y[i] - X] == true and map[x[j] - Y][y[j] - X] == true){
          int sum = pow(X,2) + pow(Y,2);
          max_sum = max(max_sum,sum);
        }
      }
    }
  }
  cout << max_sum << endl;
}