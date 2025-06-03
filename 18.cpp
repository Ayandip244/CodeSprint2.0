#include <iostream>
#include <vector>
using namespace std;

const long long b=31, mod=1e9+9;

long long getHash(string s, long long &powb){
  long long h=0; powb=1;
  for(int i=s.size()-1;i>=0;i--){
    h=(h+(s[i]-'a'+1)*powb)%mod;
    if(i) powb=(powb*b)%mod;
  }
  return h;
}

vector<int> match(string t, string p){
  int n=t.size(), m=p.size();
  if(m>n) return {};
  long long powb, ph=getHash(p, powb), h=getHash(t.substr(0,m),powb);
  vector<int> r;
  if(h==ph && t.substr(0,m)==p)r.push_back(0);
  for(int i=m;i<n;i++){
    h=(h-(t[i-m]-'a'+1)*powb%mod+mod)*b%mod;
    h=(h+(t[i]-'a'+1))%mod;
    if(h==ph && t.substr(i-m+1,m) == p) r.push_back(i-m+1);
  }
  return r;
}

int main(){
  string t,p;
  cout<<"text = ";
  getline(cin, t);
  cout<<"pattern = ";
  getline(cin, p);
  for(int i : match(t,p)) cout<<i<<" ";
  return  0;
}
