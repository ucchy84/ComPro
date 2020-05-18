#include<iostream>
#include<vector>
#include<numeric>
#define ll long long

using namespace std;

int main() {
  int N;
  string S;
  vector<int>R,G,B;
  cin >> N >> S;
  ll ans=0;
  for(int i=0;i<N;i++){
    if(S.at(i)=='R') R.push_back(i);
    else if(S.at(i)=='G') G.push_back(i);
    else B.push_back(i);
  }

  int r = R.size(), g = G.size(), b = B.size();
  for(int i=0;i<r;i++){
    for(int j=0;j<g;j++){
      ans += b;
      int minn = min(R.at(i),G.at(j));
      int maxx = max(R.at(i),G.at(j));
      int d = abs(R.at(i) - G.at(j));

      if(minn - d >= 0 && S.at(minn - d) == 'B') --ans;
      if(maxx + d < N && S.at(maxx + d) == 'B') --ans;
      if((R.at(i) + G.at(j)) % 2 == 0 && S.at(minn + d / 2) == 'B') --ans;
    }
  }
  cout << ans << endl;
}
