#include <bits/stdc++.h>
using namespace std;

int plan(int prev_time, int time, int prev_x, int x, int prev_y, int y){
    if(prev_time == time){
        if(prev_x == x and prev_y == y) return 1;
        else return 0;
    }
    cout << prev_time << endl;
    return plan(prev_time + 1, time, prev_x + 1, x, prev_y, y) + plan(prev_time + 1, time, prev_x - 1, x, prev_y, y) + plan(prev_time + 1, time, prev_x, x, prev_y + 1, y) + plan(prev_time + 1, time, prev_x, x, prev_y - 1, y);
}

int main(){
    int N;
    cin >> N;
    vector<vector<int> > trav(N + 1, vector<int>(3,0));
    bool ans = true;
    for(int i = 1; i <= N; i++){
        cin >> trav[i][0] >> trav[i][1] >> trav[i][2];
    }
    for(int i = 0; i < N; i++){
        if(plan(trav[i][0], trav[i + 1][0], trav[i][1], trav[i + 1][1], trav[i][2],trav[i + 1][2]) >= 1) ans = true;
        else ans = false;
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}