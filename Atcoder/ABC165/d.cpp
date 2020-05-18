#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#include<numeric>
#define ll long long
#define MOD = 1e9+7
 
using namespace std;

int main(){
  ll A,B,N;
  cin >> A >> B >> N;
  ll x  = B - 1;
  if(x > N) x = N;
  cout << (A*x)/B << endl;
}
