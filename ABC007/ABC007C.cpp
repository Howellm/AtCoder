#include <iostream>
#include <stack>
using namespace std;

// -1: 壁  0: 可動域  1: スタート地点  2: 目的地

void BFS(int maze [][], int i, int j){
    for(int k = 0; k < 4; k++){
        if(maze[i][j] == 0){
            // 幅優先探索法
        }
    }
}

int main(){
    // 宣言
    int R,C,sy,sx,gy,gx;
    stack<int> stack;

    // 入力
    cin >> R >> C;
    cin >> sy >> sx;
    cin >> gy >> gx;

    //　配列作成
    char val;
    int maze [R][C];
    for(int i = 0; i <= R; i++){
        for(int j = 0; j <= C; j++){
            cin >> val;
            if(val == '.'){
                maze[i][j] == 0;
            }else{
                maze[i][j] == -1;
            }
        }
    }
    maze[sy][sx] == 1;
    maze[gy][gx] == 2;
}

// BFS: 幅優先探索(breadth-first search)
// DFS: 深さ優先探索(depth-first search)