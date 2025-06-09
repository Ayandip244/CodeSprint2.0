#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,x; cin>>n;
  vector<int> a(n);
  for(int &i : a) cin>>i;
  cin>>x;
  sort(a.begin(), a.end());
  for(int i=0;i<n-2;i++){
    int l=i+1, r=n-1;
    while(l<r){
      int sum = a[i]+a[l]+a[r];
      if(sum==x){
        cout<<"true";
        return 0;
      }
      sum<x ? l++ : r--;
    }
  }
  cout<<"false";
}
