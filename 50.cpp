#include<bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;
  vector<string> a(n);
  for(string &s : a) cin>>s;
  sort(a.begin(), a.end(), [](string x, string y){return x+y > y+x;});
  if(a[0]=="0") cout<<0;
  else for(string s : a) cout<<s;
}
