#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,d=-1,m=-1;
  cout<<"n = "; cin>>n;
  vector<int> nums(n),f(n+1);
  unordered_set<int> s;
  cout<<"nums = ";
  for(int &x : nums){
    cin>>x;
    f[x]++;
    if(!s.insert(x).second) d=x;
  }
  for(int i=1;i<=n;i++)
    if(f[i]==0){
      m=i;
      break;
    }
  cout<<"["<<d<<", "<<m<<"]";
}
