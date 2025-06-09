#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,a; cin>>n;
  queue<int> q;
  for(int i=0;i<n;i++){
    cin>>a;
    q.push(a);
  }
  stack<int> s;
  while(!q.empty()){
    s.push(q.front());
    q.pop();
  }
  while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
  }
}
