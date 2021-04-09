#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, Y;
    bool flag = false;
    cin >> N >> Y;
    for(int i = 0; i <= N; i++){
        for(int j = 0; j <=N - i; j++){
            if(i * 10000 + j * 5000 + (N - i - j) * 1000 == Y){
                cout << i << " " << j << " " << N - i - j << endl;
                flag = true;
                break;
            }
        }
        if(flag) break;
    }
    if(!flag) cout << -1 << " " << -1 << " " << -1 << endl;
}