#include<bits/stdc++.h>
using namespace std;

int score(vector<int>& nums, int k){
  int n=nums.size();
  vector<int> a(n);
  a[0]=nums[0];
  for(int i=1;i<n;i++){
    int m=INT_MIN;
    for(int j=max(0,i-k);j<i;j++){
      m=max(m,a[j]);
    }
    a[i]=nums[i]+m;
  }
  return a[n-1];
}

int main(){
  string l;
  cout<<"nums = ";
  getline(cin,l);
  stringstream ss(l);
  vector<int> nums;
  int n;
  while(ss>>n){
    nums.push_back(n);
  }
  int k;
  cout<<"k = ";
  cin>>k;
  cout<<score(nums,k);
}
