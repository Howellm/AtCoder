#include <iostream>
using namespace std;

int main(){
    int N;
    char ch;
    // 入力
    cin >> N;
    cin >> ch;
    for(int i = 0; i < N; i++){
        cout << ch << '+' << i << endl;
    }
}
