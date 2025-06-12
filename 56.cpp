#include<bits/stdc++.h>
using namespace std;
int main(){
  int p,x; string l; vector<int> v;
  cout<<"tokens = "; getline(cin,l);
  stringstream ss(l.substr(l.find('=')+1));
  while(ss>>x) v.push_back(x);
  cout<<"power = "; cin>>p;
  sort(v.begin(),v.end());
  int i=0, j=v.size()-1, s=0, m=0;
  while(i<=j){
    if(p>=v[i]) p-=v[i++], m=max(m,++s);
    else if(s) p+=v[j--], s--;
    else break;
  }
  cout<<m;
}
