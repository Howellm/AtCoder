#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i % 2 == 1) {
      x -= (a[i] - 1);
    } else {
      x -= a[i];
    }
  }
  if (x >= 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}