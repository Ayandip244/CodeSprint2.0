#include<bits/stdc++.h>
using namespace std;

bool div(vector<int>& w, int K, int m){
  int s=0,c=1;
  for(int x : w){
    if(x>m) return false;
    if(s+x>m) s=x,c++;
    else s+=x;
  }
  return c<=K;
}

int main(){
  int N,K; cin>>N>>K;
  vector<int> w(N);
  for(int& x : w) cin>>x;
  int lo=0,hi=1e9,ans;
  while(lo<=hi){
    int mid = (lo+hi)/2;
    if(div(w,K,mid)) ans=mid, hi=mid-1;
    else lo=mid+1;
  }
  cout<<ans;
}
