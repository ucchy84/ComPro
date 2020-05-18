
#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<tuple>
#include<set>
#include<cmath>
#include<numeric>
#define ll long long
#define MOD = 1e9+7
const double PI=3.14159265358979323846; 
using namespace std;

int main(){
  int a,b,c,k;
  cin >> a >> b >> c >> k;
  if(a>=k) cout << k << endl;
  else if(a+b>=k) cout << a << endl;
  else if(a+b+c>=k) cout << a-(k-a-b) << endl;
}
