#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<numeric>
#define ll long long
#define MOD = 1e9+7
 
using namespace std;

int main(){
  ll X;
  cin >> X;
  ll num = 100;
  for(int i=1;i<4000;i++){
    num = num * 1.01;
    if(X<=num){
      cout << i << endl;
      break;
    }
  }
}
