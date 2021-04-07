#include <bits/stdc++.h>
using namespace std;


int main(){
    int N;
    cin >> N;
    vector<vector<int> > trav(N + 1, vector<int>(3,0));
    int dt[N + 1];
    bool ans = true;
    for(int i = 1; i <= N; i++){
        cin >> trav[i][0] >> trav[i][1] >> trav[i][2];
        dt[i] = abs(trav[i][1] - trav[i-1][1]) + abs(trav[i][2] - trav[i-1][2]);
        if(trav[i][0] - trav[i-1][0] < dt[i]) ans = false;
        if((trav[i][0] - trav[i-1][0])%2 != dt[i]%2) ans = false;
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}