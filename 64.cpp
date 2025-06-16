#include<bits/stdc++.h>
using namespace std;
int main(){
  string line;
  cout<<"nums = ";
  getline(cin,line);
  stringstream ss(line);
  vector<int> nums;
  int x,t;
  while(ss>>x) nums.push_back(x);
  cout<<"target = "; cin>>t;
  
  int l=0, r=nums.size();
  while(l<r){
    int m=(l+r)/2;
    if(nums[m]<t) l=m+1;
    else r=m;
  }
  cout<<l;
}
