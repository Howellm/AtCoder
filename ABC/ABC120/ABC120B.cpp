#include <bits/stdc++.h>
using namespace std;


int Divisor(int less, int more, int K){
  int cnt = 0;
  int ans = 0;
  for(int i = less; i >= 1; i--){
    if(more % i == 0 and less % i == 0){
      cnt++;
      ans = i;
    }
    if(cnt == K) return ans;
  }
  return ans;
}

int main(){
  int A,B,K;
  cin >> A >> B >> K;
  int ans = 0;
  if(A > B){
    ans = Divisor(B,A,K);
  }else if(B >= A){
    ans = Divisor(A,B,K);
  }
  cout << ans << endl;
}