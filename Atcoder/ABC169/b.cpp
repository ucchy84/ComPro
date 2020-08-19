
#include<bits/stdc++.h>
#define ll long long
#define MOD = 1e9+7
#define rep(i,n) for(int i=0;i<(n);++i)
const double PI=3.14159265358979323846; 
const int INF = 1001001001;
using namespace std;


int main(){
  ll n,ans=1;
  cin >> n;
  vector<ll> vc(n);
  rep(i,n){
    cin >> vc[i];
    if(vc[i]==0){
      cout << 0 << endl;
      return 0;
    }
  }

  rep(i,n){
    if(ans>1000000000000000000/vc[i]){
      cout << -1 << endl;
      return 0;
    }
    ans*=vc[i];
  }
  cout << ans << endl;
}
