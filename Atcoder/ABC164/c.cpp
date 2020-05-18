#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<numeric>
#define ll long long
#define MOD = 1e9+7
 
using namespace std;
 
int main() {
  ll N;
  cin >> N;
  set<string> ans;
  for(int i=0;i<N;i++){
    string s;
    cin >> s;
    ans.insert(s);
  }

  cout << ans.size() << endl;
}
