#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C, D,sum = 0;
  cin >> A >> B >> C >> D;
  int end = min(B,D);
  int start = max(A,C);
  sum = (end - start > 0)? (end - start) : 0;
  cout << sum << endl;
}