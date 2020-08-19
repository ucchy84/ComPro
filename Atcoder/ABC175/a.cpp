#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int cnt = 0;
  rep(i, s.size()) {
    if (s[i] == 'S') {
      cnt++;
    }
  }

  if (cnt == 0) {
    cout << 3 << endl;
    return 0;
  } else if (cnt == 1) {
    if (s[1] == 'S') {
      cout << 1 << endl;
    } else {
      cout << 2 << endl;
    }
    return 0;
  } else if (cnt == 2) {
    cout << 1 << endl;
    return 0;
  } else {
    cout << 0 << endl;
  }

  return 0;
}
