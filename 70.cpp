#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,x; cin>>n;
  map<int,int> f;
  while(n--) cin>>x, f[x]++;
  int mx=0;
  for(auto& a : f) mx=max(mx,a.second);
  cout<<mx;
}
