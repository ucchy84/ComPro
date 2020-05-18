
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
  double A,B,H,M;
  cin >> A >> B >> H >> M;

  double theta = abs(H*30 - M*6 + 0.5*M);
  if(theta > 180){
    theta = 360 - theta;
  }
  double rad = PI * theta/180;
  double ans = sqrt(A*A + B*B - 2.0 * A * B * cos(rad));
  cout << setprecision(30) << ans << endl;
}
