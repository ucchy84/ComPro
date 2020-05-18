#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<numeric>
#define ll long long
#define MOD = 1e9+7
 
using namespace std;
 
int main() {
  int A,B,C,D;
  cin >> A >> B >> C >> D;
  for(int i=0;i<100;i++){
    C = C - B;
    if(C<=0){
      cout << "Yes" << endl;
      break;
    }
    A = A - D;
    if(A<=0){
      cout << "No" << endl;
      break;
    }
  }
}
