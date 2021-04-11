#include <bits/stdc++.h>
using namespace std;

// #define move[] {-1,1}

bool Repain(int x, int y, vector<vector<int> > grid){
  for(int mov = -1; mov < 2; mov++){
    if(grid[x + mov][y]) return true;
    if(grid[x][y + mov]) return true;
    mov++;
  }
  return false;
}

int main(){
  int H,W;
  cin >> H >> W;
  char ch;
  vector<vector<int> > grid(H + 2,vector<int> (W + 2, 0));
  for(int i = 1; i <= H; i++){
    for(int j = 1; j <= W; j++){
      cin >> ch;
      if(ch == '#') grid[i][j] = 1;
    }
  }
  bool ans = true;
  for(int i = 1; i <= H; i++){
    for(int j = 1; j <= W; j++){
      if(grid[i][j] == 1){
        if(!Repain(i,j,grid)) ans = false;
      }
    }
  }
  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;
}

