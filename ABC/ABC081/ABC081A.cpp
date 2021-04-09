#include <iostream>
using namespace std;

int main() {
    int s, T, W, O;
    cin >> s;
    T = s / 100;
    s = s % 100;
    W = s / 10;
    O = s % 10;
    cout << T + W + O;
}