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
  string s,t;
  cin >> s >> t;
  string ans="Yes";
  for(int i=0;i<s.size();i++){
    if(s[i] != t[i]){
      ans = "No";
      break;
    }
  }

  cout << ans << endl;
}
