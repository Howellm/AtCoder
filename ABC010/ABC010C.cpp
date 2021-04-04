#include <bits/stdc++.h>
using namespace std;
int house[1024][2];

int distance(int X, int Y, int tx, int ty){
    int root = pow(X - tx, 2) + pow(Y - ty, 2);
    return sqrt(root);
}

int main(){
    int tx_a, ty_a, tx_b, ty_b, T, V, n;
    bool flag = false;
    cin >> tx_a >> ty_a >> tx_b >> ty_b >> T >> V >> n;
    for(int i = 0; i < n; i ++){
        for(int j = 0; j < 2; j++){
            cin >> house[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        if(distance(tx_a, ty_a, house[i][0], house[i][1]) + distance(house[i][0], house[i][1], tx_b, ty_b) <= T * V){
            flag = true;
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}