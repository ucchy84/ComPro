
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
  int K;
  string S;
  cin >> K >> S;
  if(S.size() <= K){
     cout << S << endl;
  }else{
    for(int i=0;i<K;i++){
      cout << S[i];
    }
    cout << "..." << endl;
  }
}
