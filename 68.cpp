#include<bits/stdc++.h>
using namespace std;
int main(){
  string l; cout<<"houses = ";
  getline(cin,l);
  stringstream sh(l);
  vector<int> h,t;
  int x;
  while(sh>>x) h.push_back(x);
  cout<<"heaters = ";
  getline(cin,l);
  stringstream st(l);
  while(st>>x) t.push_back(x);

  sort(t.begin(),t.end());
  int r=0;
  for(int a : h){
    auto b = lower_bound(t.begin(), t.end(), a);
    int d1 = b == t.end() ? 1e9 : abs(*b-a);
    int d2 = b == t.begin() ? 1e9 : abs(*prev(b)-a);
    r = max(r, min(d1,d2));
  }
  cout<<r;
}
