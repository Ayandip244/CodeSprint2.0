#include<bits/stdc++.h>
using namespace std;
string f(string s){
  queue<char> q;
  vector<int> c(26);
  string r;
  for(char x : s){
    c[x-'a']++;
    q.push(x);
    while(!q.empty() && c[q.front()-'a']>1) q.pop();
    r+=q.empty() ? '#' : q.front();
  }
  return r;
}
int main(){
  cout<<"s = ";
  string s; cin>>s;
  cout<<f(s);
}
