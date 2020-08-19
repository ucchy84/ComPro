#include<bits/stdc++.h>
#define ll long long
#define MOD = 1e9+7
#define rep(i,n) for(int i=0;i<(n);++i)
const double PI=3.14159265358979323846; 
const int INF = 1001001001;
using namespace std;

int main(){
  int x,n;
  cin >> x >> n;
  vector<bool> vc(101,false);

  rep(i,n){
    int p;
    cin >> p;
    vc[p] = true;
  } 

  int ans;
  rep(i,100){
    if(vc[x+i+1] == false){
      ans=x+i+1;
    }
    if(vc[x-(i+1)] == false){
      ans=x-(i+1);
    }
  } 
  cout << x << endl;
}