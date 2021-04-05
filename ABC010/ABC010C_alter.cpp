#include <bits/stdc++.h>
using namespace std;

double distance(int X, int Y, int tx, int ty){
    int root = (X - tx) * (X - tx) + (Y - ty) * (Y - ty);
    return sqrt(root);
}

int main(){
    int tx_a, ty_a, tx_b, ty_b, T, V, n;
    bool flag = false;
    cin >> tx_a >> ty_a >> tx_b >> ty_b >> T >> V >> n;
    for(int i = 0; i < n; i ++){
        int x, y;
        cin >> x >> y;
        if(distance(tx_a, ty_a, x, y) + distance(x, y, tx_b, ty_b) <= T * V){
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