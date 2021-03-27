#include <iostream>
using namespace std;

int main(){
    int K, S;
    int Val;
    int count = 0;
    cin >> K >> S;
    for(int i = K; i >= 0; i--){
        for(int j = K; j >= 0; j--){
            Val = S - i - j;
            if(0<= Val and Val<= K){
                count++;
            }
        }
    }
    cout << count;
}