#include <iostream>
using namespace std;

int main(){
    int N;
    int d[110];
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> d[i];
    }

    int bucket[110] = {0};
    for(int i = 0; i < N; i++){
        bucket[d[i]]++;
    }

    int cnt = 0;
    for(int i = 1; i <= 100; i++){
        if(bucket[i]) cnt++;
    }
    cout << cnt << endl;
}