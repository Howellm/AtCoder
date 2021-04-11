#include <bits/stdc++.h>
using namespace std;

// #define move[] {-1,1}

bool Repain(int x, int y, vector<vector<int> > grid){
  int move[2] = {-1,1};
  for(int mov = -1; mov < 2; mov++){
    cout << x << " " << y << endl;
    if(grid[x + mov][y]) return true;
    if(grid[x][y + mov]) return true;
    mov += 2;
  }
  return false;
}

int main(){
  int H,W;
  cin >> H >> W;
  char ch;
  vector<vector<int> > grid(H,vector<int> (W));
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cin >> ch;
      if(ch == '#'){
        grid[i][j] = 1;
      }else{
        grid[i][j] = 0;
      }
    }
  }
  bool ans = true;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      if(grid[i][j] == 1){
        if(!Repain(i,j,grid)) ans = false;
        cout << "hello" << endl;
      }
    }
  }
  if(ans) cout << "Yes" << endl;
  else cout << "No" << endl;
}

