#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C, D,sum = 0;
  cin >> A >> B >> C >> D;
  if(A < D and B > C){
    if(A >= C){
      if(B > D){
        sum = D - A;
      }else{
        sum = B - A;
      }
    }else{
      if(D > B){
        sum = B - C;
      }else{
        sum = D - C;
      }
    }
  }
  cout << sum << endl;
}