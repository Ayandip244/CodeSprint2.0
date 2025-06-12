#include<bits/stdc++.h>
using namespace std;
int main(){
  string s,r; cout<<"s = "; cin>>s;
  unordered_map<char,int> m;
  for(char c : s) m[c]++;
  priority_queue<pair<int,char>> q;
  for(auto& x : m) q.push({x.second,x.first});
  char p='#'; int f=0;
  while(!q.empty()){
    pair<int,char> t=q.top(); q.pop();
    r += t.second;
    if(f) q.push({f,p});
    p=t.second; f=t.first-1;
  }
  if(r.size() != s.size()) return cout<<"",0;
  cout<<r;
}
