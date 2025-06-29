#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  vector<int> a(n), pre(n,1), suf(n,1);
  for(int &x : a) cin>>x;
  for(int i=1;i<n;i++) pre[i] = pre[i-1] * a[i-1];
  for(int i=n-2;i>=0;i--) suf[i] = suf[i+1] *a[i+1];
  for(int i=0;i<n;i++) cout<< 1LL * pre[i] * suf[i]<<" ";
}
