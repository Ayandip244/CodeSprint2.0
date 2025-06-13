#include<bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;
  vector<int> v(n), p(n);
  for(int &x : v) cin>>x;
  for(int &x : p) cin>>x;
  sort(v.begin(),v.end());
  sort(p.begin(),p.end());
  for(int i=0;i<n;i++)
    if(v[i] <= p[i]) return cout<<"No",0;
  cout<<"yes";
}
