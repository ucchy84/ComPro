#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<numeric>
#define ll long long
#define MOD = 1e9+7
 
using namespace std;
 
int main() {
  string s;
  cin >> s;
  reverse(s.begin(),s.end());

  map<int,int> cnt;
  cnt[0]++;
  int sum=0,ans=0,base=1;
  for(int i=0;i<s.size();i++){
    sum += base * (s[i]-'0');
    sum %= 2019;
    ans += cnt[sum];
    cnt[sum]++;
    base *= 10;
    base %= 2019;
  }
  cout << ans << endl;
}
