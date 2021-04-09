#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;


int ctoi(const char c){
    switch(c){
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        default : return -1;
    }
}

bool cal(string s, int num, int A, int B){
    int sum = 0;
    for(int i = 0; i < num; i++){
        sum += ctoi(s[i]);
    }
    if(A <= sum and sum <= B){
        return true;
    }else{
        return false;
    }
}

int main(){
    int N,A,B,sum = 0;
    cin >> N >> A >> B;
    for(int i = 1; i <= N; i++){
        string s;
        s = to_string(i);
        if(cal(s, s.length(), A, B)) sum += i;
    }
    cout << sum << endl;
}