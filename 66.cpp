#include<iostream>
using namespace std;
int main(){
  int n,r, i=0, c=0;
  string s; cin>>n>>s;
  r = n-1;
  while(i<r){
    while(i<n && s[i]=='0') i++;
    while(r>=0 && s[r]=='1') r--;
    if(i<r) i++,r--,c++;
  }
  cout<<c;
}
