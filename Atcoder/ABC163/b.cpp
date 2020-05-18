#include<iostream>
#include<vector>
#include<map>
#include<numeric>
#define ll long long
#define PI 3.14159265359

using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  long long ans=0;
  for(int i=0;i<m;++i){
    int a;
    cin >> a;
    ans += a;  
  }

  if(n >= ans){
    cout << n-ans << endl;
  }else{
    cout << -1 << endl;
  }
}
