#include<bits/stdc++.h>
using namespace std;
int main(){
  int x; vector<int> v;
  string l; cout<<"nums = ";
  getline(cin,l);
  stringstream ss(l);
  while(ss>>x) v.push_back(x);
  for(int &n : v) n*=n;
  sort(v.begin(),v.end());
  for(int n : v) cout<<n<<" ";
}
