#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<list>
#include<string>
#include<algorithm>
 
using namespace std;

int main(){
  long long n,k;
  cin >> n >> k;
  long long ans = n;
  if(abs(n-k) < n){
    long long num = n%k;
    if(num!=0){
      ans = abs(num-k);
    }else{
      ans = 0;
    }
  }

  cout << ans << endl;
}
