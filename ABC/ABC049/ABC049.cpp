#include <bits/stdc++.h>
using namespace std;

int main(){
    string S, T , Judge [] = {"dream", "dreamer", "erase", "eraser"}, Num [sizeof(Judge)];
    cin >> S;
    bool ans = true;
    reverse(S.begin(),S.end());
    for(int i = 0; i < S.length(); i++){
        for(int j = 0; j < 4; j++){
            Num[j] = S.substr(i, Judge[j].length());
            // cout << Num[j] << endl;
        }
        if(Num[0] == "maerd") i += Judge[0].length() -1;
        else if (Num[1] == "remaerd") i += Judge[1].length() -1;
        else if(Num[2] == "esare") i += Judge[2].length() -1;
        else if(Num[3] == "resare") i += Judge[3].length() -1;
        else ans = false;
    }
    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;
}