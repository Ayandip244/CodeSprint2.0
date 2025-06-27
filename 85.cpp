#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cout<<"n = "; cin>>n;
  cin.ignore();
  vector<vector<int>> adj(n);
  for(int i=0;i<n;i++){
    string l;
    getline(cin,l);
    stringstream ss(l);
    int x;
    while(ss>>x) adj[i].push_back(x);
  }

  vector<bool> vis(n);
  queue<int> q;
  vector<int> r;

  q.push(0); vis[0]=1;
  while(!q.empty()){
    int u=q.front(); q.pop();
    r.push_back(u);
    for(int v : adj[u])
      if(!vis[v]) q.push(v), vis[v]=1;
  }
  for(int x : r) cout<<x<<" ";
}
