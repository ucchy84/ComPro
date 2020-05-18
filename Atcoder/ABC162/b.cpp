#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<list>
#include<string>
#include<algorithm>
#define ll long long

using namespace std;

int main(){
  int N;
  cin >> N;
  ll ans=0;
  for(int i=1;i<N+1;i++){
    if(i % 3 != 0 && i % 5 != 0){
      ans += i;
    }
  }
  cout << ans << endl;
}
