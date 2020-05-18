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
  int N,K;
  cin >> N >> K;
  vector<int> ans(N,0);
  for(int i=0;i<K;i++){
    int d;
    cin >> d;
    for(int j=0;j<d;j++){
      int a = 0;
      cin >> a;
      ans[a-1]++;
    }
  }
   int num=0;
  for(int i=0;i<ans.size();i++){
    if(ans[i] == 0){
       num++;
    }
  }

  cout << num << endl;
}
