#include <bits/stdc++.h>
using namespace std;

int main(){
  string num;
  cin >> num;
  for(int i = 0; i < (1 << 3); i++){
    int sum = num[0] - '0';
    string ans = "";
    ans += num[0];
    for(int j = 0; j < 3; j++){
      if(i & (1 << j)){
        sum += num[j + 1] - '0';
        ans += "+";
      }else{
        sum -= num[j + 1] - '0';
        ans += "-";
      }
      ans += num[j + 1];
    }
    if(sum == 7){
      cout << ans + "=7" << endl;
      break;
    }
  }
}