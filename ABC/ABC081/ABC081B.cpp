#include <iostream>
using namespace std;

int main(){
    int N, count = 0;
    cin >> N;
    int S[N];
    for (int i = 0; i < N; i++) cin >> S[i];
    while(true){
        bool exist_odd = false;
        for(int i = 0; i < N; i++){
            if (S[i] % 2 != 0) exist_odd = true;
        }
        if (exist_odd) break;
        for(int i = 0; i < N; i++){
            S[i] /= 2;
        }
        count++;
    }
    cout << count << endl;
}

// #include <iostream>
// using namespace std;

// int main(){
//     int n,b = -1;
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         int x,a = 0;
//         cin >> x;
//         while(x % 2 == 0){
//             x /= 2;
//             a++;
//         }
//         if(a == 0){
//             b = a;
//             break;
//         }
//         if(a < b || b == -1)
//             b = a;
//     }
//     cout << b << endl;
// }