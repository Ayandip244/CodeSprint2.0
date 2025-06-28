#include<bits/stdc++.h>
using namespace std;

int main(){
  string s,t; cin>>s>>t;
  if(s.size() != t.size()) return cout<<"false",0;
  
  unordered_map<char,char> m;
  unordered_set<char> used;
  for(int i=0;i<s.size();i++){
    if(m.count(s[i])){
      if(m[s[i]] != t[i]) return cout<<"false",0;
    }else{
      if(used.count(t[i])) return cout<<"false",0;
      m[s[i]] = t[i];
      used.insert(t[i]);
    }
  }
  cout<<"true";
}
