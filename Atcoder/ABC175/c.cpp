#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll = long long;

int main(){
  ll x, k, d;
  cin >> x >> k >> d;
  x = abs(x);
  ll ans = min(k, x / d);
  k -= ans;
  x -= ans * d;
  if(k % 2 == 0) {
    cout << x << endl;
  }else{
    cout << d - x << endl;
  }
  return 0;
}