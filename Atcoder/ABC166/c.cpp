#include<iostream>
#include<vector>
#include<map>
#include<tuple>
#include<set>
#include<cmath>
#include<numeric>
#define ll long long
#define MOD = 1e9+7
 
using namespace std;
 
int main(){
  ll N,M;
  cin >> N >> M;
  vector<int> H(N+1);
  for(int i=1;i<N+1;i++){
    cin >> H[i];
  }
  map<int,int> ans;
  map<int,int> cnt;
  for(int i=0;i<M;i++){
    int A,B;
    cin >> A >> B;
    cnt[A]++;
    cnt[B]++;
    if((H[A] - H[B]) > 0){
      ans[A]++;
    }else if(H[B] - H[A] > 0){
      ans[B]++;
    }
  }

  int num=0;
  for(int i=1;i<N+1;i++){
    if(cnt[i] == ans[i]) num++;
  }
  cout << num << endl;

}
