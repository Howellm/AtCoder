#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long sum = 0, res_1 = 0, res_2 = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        sum += a[i];
        if(i%2 == 0 and sum >= 0){
            res_1 += sum + 1;
            sum = -1;
        }else if(i%2 != 0 and sum <= 0){
            res_1 += abs(sum) + 1;
            sum = 1;
        }
    }
    sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(i%2 == 0 and sum <= 0){
            res_2 += abs(sum) + 1;
            sum = 1;
        }else if(i%2 != 0 and sum >= 0){
            res_2 += sum + 1;
            sum = -1;
        }
    }
    
    cout << min(res_1,res_2) << endl;
}