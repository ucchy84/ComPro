#include<bits/stdc++.h>
#define ll long long
#define MOD = 1e9+7
#define rep(i,n) for(int i=0;i<(n);++i)
const double PI=3.14159265358979323846; 
const int INF = 1001001001;
using namespace std;

int main(){
  int n;
  cin >> n;
  if(n%1000==0){
    cout << 0 << endl;
    return 0;
  }
  cout << 1000 - (n%1000) << endl;
}
