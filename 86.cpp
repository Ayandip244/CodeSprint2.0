#include<bits/stdc++.h>
using namespace std;

void dfs(int u,vector<vector<int>>adj,vector<bool>&v,vector<int>&r){
  v[u]=1;
  r.push_back(u);
  for(int a : adj[u])
    if(!v[a]) dfs(a,adj,v,r);
}

int main(){
  int n;cout<<"n = ";cin>>n;
  cin.ignore();
  vector<vector<int>> adj(n);
  for(int i=0;i<n;i++){
    string l;
    getline(cin,l);
    stringstream ss(l);
    int x;
    while(ss>>x) adj[i].push_back(x);
  }
  vector<bool> v(n);
  vector<int> r;
  dfs(0,adj,v,r);
  for(int x : r) cout<<x<<" ";
}
