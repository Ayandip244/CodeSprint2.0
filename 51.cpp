#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,t;
  cin>>n;
  vector<int> a(n);
  for(int &x : a) cin>>x;
  cin>>t;
  sort(a.begin(),a.end());
  int m=INT_MAX, ans=0;
  for(int i=0;i<n-2;i++){
    int l=i+1, r=n-1;
    while(l<r){
      int sum=a[i]+a[l]+a[r];
      int diff=abs(sum-t);
      if(diff<m || (diff==m && sum>ans)){
        m=diff;
        ans=sum;
      }
      if(sum<t) l++;
      else r--;
    }
  }
  cout<<ans;
}
