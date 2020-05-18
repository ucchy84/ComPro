#include<iostream>
#include<vector>
#include<map>
#include<numeric>
#define ll long long
#define PI 3.14159265359

using namespace std;

int main() {
  ll n;
  cin >> n;
  map<int,int> mp;
  ll num=1;
  ll ans=0;
  for(int i=0;i<n-1;++i){
    int a;
    cin >> a;
    mp[a-1]++;
  }

  vector<int> vc(n,0);
  for(int i=0;i<mp.size();++i){
    vc[i] = mp[i];
  }

  for(int i=0;i<n;i++){
    cout << vc[i] << endl;
  }
}
