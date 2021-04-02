#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N,cnt = 0,prev = 0;
    cin >> N;
    int d[N];
    for(int i = 0; i < N; i++){
        cin >> d[i];
    }
    sort(d, d + N);
    for(int j = N - 1; j >= 0; j--){
        if(prev == d[j]){
            cnt--;
        }
        prev = d[j];
        cnt++;
    }
    cout << cnt << endl;
}