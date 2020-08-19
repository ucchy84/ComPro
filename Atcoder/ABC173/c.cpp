//途中
#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll = long long;

int main(){
  ll x, k, d;
  cin >> x >> k >> d;
  ll div = abs(x) / d;
  if(abs(x) > d){
    if(div <= k){
      cout << abs(x) % d << endl;
    }else{
      cout << abs(abs(x) - (k * d)) << endl;
    }
  }else{
    if(d % 2 == 0){
      cout << abs(x) << endl;
    }else{
      cout << abs(abs(x)-d) << endl;
    }
  }
  return 0;
}