#include<bits/stdc++.h>
using namespace std;

string f(string s){
  int n=s.size();
  queue<int> r,d;
  for(int i=0;i<n;i++){
    if(s[i]=='R') r.push(i);
    else d.push(i);
  }
  while(!r.empty() && !d.empty()){
    int x=r.front(); r.pop();
    int y=d.front(); d.pop();
    if(x<y) r.push(x+n);
    else d.push(y+n);
  }
  return r.size() ? "Radiant" : "Dire";
}

int main(){
  string s;
  cout<<"senate = ";
  cin>>s;
  cout<<f(s);
}
