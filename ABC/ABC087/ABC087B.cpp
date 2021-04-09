#include <iostream>
using namespace std;

int main(){
    int A, B, C, X, cnt = 0;
    cin >> A >> B >> C >> X;

    for(int i = 0; i <= A; i++){
        for (int j = 0; j <= B; j++){
            int Sum = X - 500*i - 100*j;
            if((Sum % 50 == 0) && (Sum / 50 <= C) && Sum >= 0){
                cnt++;
            }
            // if(Sum >= 0 && Sum <= 50*C){
            //     cnt++;
            // }
        }
    }
    cout << cnt;
}