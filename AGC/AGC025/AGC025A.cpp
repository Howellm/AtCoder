#include <bits/stdc++.h>
using namespace std;

int Cal(int num){
    int sum = 0;
    while(num > 0){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// int Digits(int n){
//     int count = 0;
//     while(n > 0){
//         n /= 10;
//         count++;
//     }
//     return count;
// }

int main(){
    string N;
    cin >> N;
    int num = N.length() - 1;
    // int num = Digits(n);
    int n = stoi(N);
    int sec_num = pow(10, num);

    int res = 0;
    int sur = n % sec_num;
    int divition = n / sec_num;
    if((sur) > 0){
        res = divition + Cal(sur);
    }else if(sur == 0 and (n - sec_num) == 0){
        res = 10;
    }else{
        res = divition;
    }
    
    cout << res << endl;
}