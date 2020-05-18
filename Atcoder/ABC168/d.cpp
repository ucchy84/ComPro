#include<bits/stdc++.h>
#define ll long long
#define MOD = 1e9+7
#define rep(i,n) for(int i=0;i<(n);++i)
const double PI=3.14159265358979323846; 
const int INF = 1001001001;
using namespace std;


vector<int> to[100005];
int main(){
  int n,m;
  cin >> n >> m;
  rep(i,m){
    int a,b;
    cin >> a >> b;
    --a,--b;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  queue<int> q;
  vector<int> dist(n, INF);
  vector<int> pre(n, -1);
  dist[0] = 0;
  q.push(0);
  while(!q.empty()){
    int v = q.front(); q.pop();
    for(int u : to[v]){
      if(dist[u] != INF) continue;
      dist[u] = dist[v]+1;
      pre[u] = v;
      q.push(u);
    }
  }

  cout << "Yes" << endl;
  rep(i,n){
    if(i==0) continue;
    int ans = pre[i];
    ++ans;
    cout << ans << endl;
  }
}
