#include <bits/stdc++.h>
using namespace std;

int a[10] = {1, 14, 32, 51, 51, 51, 243, 419, 750, 910};

int binary_search(int key){
  int left = 0, right = 10 - 1;
  while(right >= left){
    int mid = (right + left) / 2;
    if(a[mid] == key) return mid;
    else if(a[mid] < key) left = mid + 1;
    else if(a[mid] > key) right = mid - 1;
  }
  return -1;
}

// int main(){
//   cout << binary_search(1) << endl;
// }

int main(){
  int N;
  cin >> N;
  vector<long long> a(N), b(N), c(N);
  for (int i = 0; i < N; ++i) cin >> a[i];
  for (int i = 0; i < N; ++i) cin >> b[i];
  for (int i = 0; i < N; ++i) cin >> c[i];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  sort(c.begin(), c.end());

  long long res = 0;
  for(int j = 0; j < N; j++){
    long long Aj = lower_bound(a.begin(), a.end(), b[j]) - a.begin();
    long long Cj = N - (upper_bound(c.begin(), c.end(), b[j]) - c.begin());
    res += Aj * Cj;
  }
  long long Cj = a.end();
  cout << Cj << endl;
}