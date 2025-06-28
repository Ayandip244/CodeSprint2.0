#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  vector<int> m(n), l(n);
  for(int i=0;i<n;i++){
    string s; cin>>s;
    for(char c : s) m[i] |= 1<<(c-'a');
    l[i] = s.size();
  }
  int ans=0;
  for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
      if(!(m[i] & m[j]))
        ans = max(ans, l[i] * l[j]);
  cout<<ans;
}
