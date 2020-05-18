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
  int N;
  cin >> N;
  int ans = N % 10;
  if(ans == 3) cout << "bon" << endl;
  else if (ans == 0 || ans == 1 || ans == 6 || ans == 8) cout << "pon" << endl;
  else cout << "hon" << endl;
}

