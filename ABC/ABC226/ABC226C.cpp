#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  // このコードは標準入力と標準出力を用いたサンプルコードです。
  // このコードは好きなように編集・削除してもらって構いません。
  // ---
  // This is a sample code to use stdin and stdout.
  // Edit and remove this code as you like.

  int n;
  cin >> n;

  int c[n];
  for(int i=0; i<n; i++){
    cin >> c[i];
  }

  sort(c,c+n);

  int answer = 0;
  for(int i = 1; i < n-1; i++){
    if(c[i] < c[i+1]){
      if(c[i-1]>0){
        answer += c[i-1]*n - 1 - i;
      }else{
        answer += n - 1 - i;
      }
    }else if(c[i] == c[i+1]){
      answer++;
    }
  }

  answer = (1 + answer) % 100003;

  cout << answer << endl;

  return 0;
}