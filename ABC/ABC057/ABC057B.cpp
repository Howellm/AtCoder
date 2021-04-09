#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    bool ans = false;
    for(int i = 1; i <= 9; i++){
        if(N / i <= 9 and N % i == 0) ans = true;
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}