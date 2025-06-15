#include<bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;
  set<string> s;
  while(n--){
    string w; cin>>w;
    cout<<distance(s.begin(),s.lower_bound(w))<<"\n";
    s.insert(w);
  }
}
