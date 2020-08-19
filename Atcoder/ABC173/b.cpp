#include<bits/stdc++.h>
#define ll long long
#define MOD = 1e9+7
#define rep(i,n) for(int i=0;i<(n);++i)
const double PI=3.14159265358979323846; 
const int INF = 1001001001;
using namespace std;

int main(){
  ll n;
  cin >> n;
  vector<int> ans(4,0);

  rep(i,n){
    string s;
    cin >> s;
    if(s=="AC") ans[0]++;
    else if(s=="WA") ans[1]++;
    else if(s=="TLE") ans[2]++;
    else if(s=="RE") ans[3]++;
  }

  rep(i, ans.size()){
    if(i==0) cout << "AC" << " " << "x" << " " << ans[i] << endl;
    else if(i==1) cout << "WA" << " " << "x" << " " << ans[i] << endl;
    else if(i==2) cout << "TLE" << " " << "x" << " " << ans[i] << endl;
    else if(i==3) cout << "RE" << " " << "x" << " " << ans[i] << endl;
  }
}
