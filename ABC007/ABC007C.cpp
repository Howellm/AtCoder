#include <bits/stdc++.h>
using namespace std;
/* vector宣言 */
using Graph = vector<vector<vector<int> > >;

// -1: 壁  0: 可動域  1: スタート地点  2: 目的地

int main(){
    // 宣言
    int R,C,sy,sx,gy,gx,Num = 0, cnt = 1;
    // 入力
    cin >> R >> C;
    cin >> sy >> sx;
    cin >> gy >> gx;

    Graph G(R);
    char ch;
    int maze[R][C];
    int forward [2] = {-1, 1};
    //　配列作成
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cin >> ch;
            if(ch == '.'){
                maze[i][j] = 1;
                Num++;
            }else{
                maze[i][j] = 0;
            }
        }
    }
    for(int i = 1; i < R - 1; i++){
        for(int j = 1; j < C - 1; j++){
            for(int f : forward){
                if(maze[i + f][j] == 1){
                    G[i][j].push_back(cnt);
                    cnt++;
                }
                if(maze[i][j + f] == 1){
                    G[i][j].push_back(cnt);
                    cnt++;
                }
            }
        }
    }
    vector<vector<int> > dist(R, vector<int>(C, -1));
    queue<pair<int, int> > que;

    dist[sy][sx] = 0;
    que.push(make_pair(sy,sx));

    while(!que.empty()){
        pair<int, int> v = que.front();
        int x = v.first;
        int y = v.second;
        que.pop();

        for(int nv : G[x][y]){
            if(dist[nv] != -1) continue;

            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }
    cout << dist[sy + sx] << endl;
}

// BFS: 幅優先探索(breadth-first search)
// DFS: 深さ優先探索(depth-first search)