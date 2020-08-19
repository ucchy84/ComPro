#include<bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(n);++i)
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  vector<int> vc(n);
  rep(i, n) {
    cin >> vc[i];
  }

  sort(vc.begin(), vc.end());
  int cnt = 0;
  for(int i = 0; i < n;i++){
    for (int j = 0; j < i;j++){
      for (int k = 0; k < j;k++){
        if ((vc[i] != vc[j] && vc[i] != vc[k] && vc[j] != vc[k]) && (vc[k] + vc[j] > vc[i]))
        {
          cnt++;
        }
      }
    }
  }

  cout << cnt << endl;
  return 0;
}