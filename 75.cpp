#include<iostream>
using namespace std;
int main(){
  int k; cin>>k;
  string s="a";
  while(s.size()<k){
    string t=s;
    for(char &c : t) c = (c-'a'+1)%26+'a';
    s += t;
  }
  cout<<s[k-1];
}
