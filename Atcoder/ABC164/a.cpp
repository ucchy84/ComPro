#include<iostream>
#include<vector>
#include<map>
#include<numeric>
#define ll long long
#define MOD = 1e9+7
 
using namespace std;
 
int main() {
  int S,W;
  cin >> S >> W;
  if(S<=W){
    cout << "unsafe" << endl;
  }else{
    cout << "safe" << endl;
  }
}
