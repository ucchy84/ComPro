#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<list>
#include<string>
#include<algorithm>
 
using namespace std;
 
int main(){
  float n,m;
  cin >> n >> m;
  float sum=0;
  vector<int> vc(n);
  for(int i=0;i<n;i++){
    cin >> vc.at(i);
    sum += vc.at(i);
  }
  sort(vc.begin(),vc.end(),greater<int>());
 
  string ans;
  float num = sum / (4*m);
  if(vc[m-1] >= num){
    cout << "Yes" << endl;
  }else {
    cout << "No" << endl;
  } 
}
