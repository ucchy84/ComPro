#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<numeric>
#define ll long long
#define MOD = 1e9+7
 
using namespace std;

int main(){
  int K,A,B,ans;
  cin >> K >> A >> B;
  ans = B / K;
  if(ans * K >=A) cout << "OK" << endl;
  else cout << "NG" << endl;
}
