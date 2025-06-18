#include<bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;
  vector<bool> p(n+1,1);
  vector<int> v;
  p[0] = p[1] = 0;
  for(int i=2;i<=n;i++){
    if(p[i]){
      v.push_back(i);
      for(int j=i*2;j<=n;j+=i)
        p[j]=0;
    }
  }
  int s = v.size();
  vector<bool> pi(s+1,1);
  pi[0] = pi[1] = 0;
  for(int i=2;i*i<=s;i++){
    if(pi[i]){
      for(int j=i*i;j<=s;j+=i)
        pi[j]=0;
    }
  }
  for(int i=0;i<s;i++)
    if(pi[i+1]) cout<<v[i]<<" ";
}
