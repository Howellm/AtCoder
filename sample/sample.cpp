#include<iostream>

using namespace std;

// command + Shift + B;

int main(){
    char str[128], str2[128];
    cout << "名前を入力してください: \n";
    cin >> str >> str2;
    cout << "ようこそ" << str << str2 << "さん";
    return 0;
}