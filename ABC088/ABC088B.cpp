#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, Alice = 0, Bob = 0;
    cin >> N;
    int s[N];
    bool flag = true;
    for(int i = 0; i < N; i++){
        cin >> s[i];
    }
    sort(s,s + N);
    for(int j = N - 1; j >= 0; j--){
        if(flag){
            Alice += s[j];
            flag = false;
        }else{
            Bob += s[j];
            flag = true;
        }
    }
    cout << Alice - Bob;
}