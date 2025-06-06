#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> a(n), nge(n,-1), ans(n,-1);
  for(int i=0;i<n;i++) cin>>a[i];

  stack<int> s;
  for(int i=n-1;i>=0;i--){
    while(!s.empty() && a[s.top()] <= a[i]) s.pop();
    if(!s.empty()) nge[i]=s.top();
    s.push(i);
  }

  for(int i=0;i<n;i++){
    int p=nge[i];
    if(p!=-1){
      for(int j=p+1;j<n;j++){
        if(a[j]<a[p]){
          ans[i]=a[j];
          break;
        }
      }
    }
  }
  for(int x : ans) cout<<x<<" ";
  return 0;
}
