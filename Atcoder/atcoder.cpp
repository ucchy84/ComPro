#include<bits/stdc++.h>
#define ll long long
#define MOD = 1e9+7
#define rep(i,n) for(int i=0;i<(n);++i)
const double PI=3.14159265358979323846; 
const int INF = 1001001001;

using namespace std;

int main(){
  int n,m,x;
  cin >> n >> m >> x;
  vector<int> C(n);
  vector<int> A[n];
  rep(i,n){
    cin >> C[i];
    rep(j,m){
      int a;
      cin >> a;
      A[i].push_back(a);
    }
  }

  vector<int> cost;
  int ans=INF;
  for(int bit=0; bit<(1<<n);++bit){
    vector<int> num(m,0); 
    int sum=0;
    for(int i=0;i<n;i++){
      if((bit>>i) & 1){
        rep(j,m){
          num[j] += A[i][j];
        }
        sum += C[i];
      }
    }
    
    bool ok = true;
    rep(j,m) if (num[j] < x) ok = false;  
    if(ok) ans = min(ans,sum);
  }

  if(ans == INF) cout << -1 << endl;
  else cout << ans << endl;
}
